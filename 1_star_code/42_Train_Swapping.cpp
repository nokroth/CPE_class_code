//299 - Train Swapping
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-1; j++){
                if (v[j] > v[j+1]){
                    swap(v[j], v[j+1]);
                    ans++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", ans);
        //cout << ans << '\n';
    }
}