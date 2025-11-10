//11417 - GCD
#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y){
    if (!y) return x;
    return gcd(y, x%y);
}

int main(){
    int N;
    while (cin >> N){
        int G = 0;
        if (N == 0) break;
        for (int i = 1; i < N; i++){
            for (int j = i+1; j <= N; j++){
                G += gcd(i, j);
            }
        }
        cout << G << '\n';
    }
}