// 11063 - B2-Sequence
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, now = 1;
    while (cin >> t) {
        vector<int> v(t);
        int mx = -1;
        bool is_b2 = true;

        for (int i = 0; i < t; i++) {
            cin >> v[i];
            mx = max(mx, v[i]);

            if (v[i] < 1) {
                is_b2 = false;
            }
            
            if (i > 0 && v[i] <= v[i - 1]) {
                is_b2 = false;
            }
        }

        vector<int> cnt(mx + mx + 1, 0); 
        
        if (is_b2) {
            
            for (int i = 0; i < t; i++) {
                for (int j = i; j < t; j++) {
                    int sum = v[i] + v[j];
                    
                    if (cnt[sum] != 0) {
                        is_b2 = false;
                        break;
                    }
                    cnt[sum]++;
                }
                if (!is_b2) break;
            }
        }
        printf("Case #%d: It is %sa B2-Sequence.\n\n", now++, is_b2 ? "" : "not ");
    }
    
    return 0;
}