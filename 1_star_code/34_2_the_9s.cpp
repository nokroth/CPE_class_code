// 10922 - 2 the 9s
#include <bits/stdc++.h>

using namespace std;

int digit_of_nine(string s, int k){
    int tot = 0;
    for (auto i : s){
        int now = i - '0';
        tot += now;
    }
    // cout << tot << '\n';
    if (tot == 9) return k+1;
    return digit_of_nine(to_string(tot), k+1);
}

int main(){
    string s;
    while (cin >> s){
        if (s == "0") break;
        int curr = 0;
        for (auto i : s){
            curr += (i - '0');
        }
        if (curr % 9){
            cout << s << " is not a multiple of 9." << '\n';
            continue;
        }
        int ans = digit_of_nine(s, 0);
        cout << s << " is a multiple of 9 and has 9-degree " << ans << ".\n"; // 1
    }
}