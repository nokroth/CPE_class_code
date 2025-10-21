//11332 - Summing Digits
#include <bits/stdc++.h>

using namespace std;

long long int f(long long int k){
    int tot = 0;
    while (k > 0){
        tot += k % 10;
        k /= 10;
    }
    if (tot >= 10) return f(tot);
    return tot;
}

int main(){
    long long int n;
    while (cin >> n){
        if (n == 0) break;
        cout << f(n) << '\n';
    }
    return 0;
}
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=2307&mosmsg=Submission+received+with+ID+30743679