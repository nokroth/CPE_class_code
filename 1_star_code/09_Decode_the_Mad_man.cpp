// 10222 - Decode the Mad man
#include <bits/stdc++.h>

using namespace std;

string mp[4] = {"`1234567890-=",
                "qwertyuiop[]\\",
                "asdfghjkl;\'",
                "zxcvbnm,./"
};

int main(){
    string line;
    while (getline(cin, line)) {
        for (char c : line) {
            if (c == ' ') {
                cout << ' ';
                continue;
            }
            
            char lower_c = tolower(c);
            bool found = false;
            
            for (int i = 0; i < 4; i++) {
                for (int j = 2; j < mp[i].length(); j++) {
                        if (mp[i][j] == lower_c) {
                        cout << mp[i][j-2];
                        found = true;
                        break;
                    }
                }
                if (found) {
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1163&mosmsg=Submission+received+with+ID+30743106