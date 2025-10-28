// 11461 Square Numbers
#include <bits/stdc++.h>
// #include <iostream>
// #include <stdio.h>
// #include <stdlib.h>
// #include <vector>
// #include <string>

using namespace std;

int main() {
    int l, r;
    while (cin >> l >> r){
        if (l == 0 && r == 0) break;
        if (r < l){
            int temp = l;
            l = r;
            r = temp;
        }
        int x = 1, ans = 0;
        while (x*x <= r){
            if (x*x >= l) ans++;
            x++;
        }
        cout << ans << '\n';
    }
    
    return 0;
}