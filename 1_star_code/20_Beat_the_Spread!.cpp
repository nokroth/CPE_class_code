// 10812 - Beat the Spread!
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int ad, dif;
        cin >> ad >> dif;
        
        if (dif > ad || (ad + dif) % 2 != 0){
            printf("impossible\n");
        } else {
            int x = (ad + dif) / 2;
            int y = ad - x;
            printf("%d %d\n", x, y);
        }
    }
    return 0;
}