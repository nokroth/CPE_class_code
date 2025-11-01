//10035 - Primary Arithmetic
#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b;
    map <char, int> m;
    int n = 0;
    for (char i = '0'; i <= '9'; i++){
        m[i] = i - '0';
    }
    while (cin >> a >> b){
        if (a == "0" && b == "0") break;
        string ans = "";
        int in = 0, need = max(a.size(), b.size()), cnt = 0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for (int i = 0; i < need; i++){
            int now = in;
            if (i < a.size()) now += m[a[i]];
            if (i < b.size()) now += m[b[i]];
            if (now >= 10){
                in = now/10;
                cnt++;
            }else{
                in = 0;
            }
            
        }
        if (cnt == 0) cout << "No carry operation.\n";
        else if (cnt == 1) cout << "1 carry operation.\n";
        else cout << cnt << " carry operations.\n";
    }
}
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=976&mosmsg=Submission+received+with+ID+30742209