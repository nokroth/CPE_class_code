// 948 - Fibonaccimal Base
#include <bits/stdc++.h>

using namespace std;

vector <int> f;

int main(){
    f.push_back(1);
    f.push_back(2);
    int N, k = 1;
    cin >> N;
    while (N--){
        int n;
        cin >> n;
        while (f[f.size()-1] < n){
            f.push_back(f[k]+f[k-1]);
            k++;
        }
        // for (auto x : f){
        //     cout << x << ' ';
        // }
        // cout << '\n';
        string ans = to_string(n) + " = ";
        string now = "";
        bool have1 = false;
        for (int i = f.size()-1; i >= 0; i--){
            if (f[i] <= n){
                now.push_back('1');
                n -= f[i];
                have1 = true;
            }else if (have1){
                now.push_back('0');
            }
        }
        cout << ans+now+" (fib)\n";
    }
}