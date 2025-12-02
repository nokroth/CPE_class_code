// 10193 - All You Need Is Love
#include <bits/stdc++.h>

using namespace std;

int GCD_is_one(long long int a, long long int b){
    while (b != 0){
        long long int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long int to_DEC(string s){
    long long int ans = 0, p = 1;
    for (int i = s.size()-1; i >= 0; i--){
        if (s[i] == '1') ans += p;
        p *= 2;
    }
    return ans;
}

int main(){
    int n, tms = 1;
    cin >> n;
    while (n--){
        string s1, s2;
        cin >> s1 >> s2;
        long long int t1 = to_DEC(s1), t2 = to_DEC(s2);
        if (GCD_is_one(t1, t2) > 1) cout << "Pair #" << tms++ << ": All you need is love!" << endl;
        else cout << "Pair #" << tms++ << ": Love is not all you need!" << endl;
    }
    
    return 0;
}