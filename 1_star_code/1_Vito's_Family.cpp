//10041 - Vito's Family
#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        int r, ans = 1e9;
        cin >> r;
        int house[r];
        for (int i = 0; i < r; i++){
            cin >> house[i];
        }
        sort(house, house+r);
        for (int i = house[0]; i < house[r-1]; i++){
            int tot = 0;
            for (auto j : house){
                tot += abs(i - j);
            }
            ans = min(ans, tot);
        }
        cout << ans << '\n';
    }
}
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=982&mosmsg=Submission+received+with+ID+30741966