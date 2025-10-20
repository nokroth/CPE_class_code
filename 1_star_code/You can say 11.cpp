//10929 - You can say 11
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while (cin >> s && s != "0") {
        int rd = 0; // 相當於 dp[i-1]
        for (int i = 0; i < s.length(); i++) {
            int current_digit = s[i] - '0';
            rd = (rd * 10 + current_digit) % 11; // 計算新的 remainder，相當於 dp[i]
        }

        if (rd == 0) {
            cout << s << " is a multiple of 11." << endl;
        } else {
            cout << s << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1870&mosmsg=Submission+received+with+ID+30742362#google_vignette