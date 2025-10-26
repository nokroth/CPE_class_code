// 10783 - Odd Sum
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, col = 1;
    cin >> t;
    while (col <= t){
        long long ans = 0, l, r;
        cin >> l >> r;
        for (int i = l; i <= r; i++){
            if (i % 2) ans += i;
        }
        printf("Case %d: %lld\n", col++, ans);
    }
}