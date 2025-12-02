// 10050 - Hartals
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        int days, q, ans = 0;
        cin >> days >> q;
        vector <int> date(days+1, 0); // 使用陣列儲存那些天會罷工
        for (int i = 0; i < q; i++){
            int p, tms = 1;
            cin >> p;
            int p1 = p;
            while (p <= days){
                date[p]++;
                p += p1;
            }
        }
        for (int i = 1; i <= days; i++){
            if (i % 7 == 6 || i % 7 == 0) continue;
            if (date[i] != 0) ans++;
        }
        cout << ans << '\n';
    }
}