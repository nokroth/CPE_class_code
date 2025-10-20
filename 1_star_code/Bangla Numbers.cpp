// 10101 - Bangla Numbers
#include <bits/stdc++.h>

using namespace std;

void solve(long long n) {
    if (n == 0) {
        return;
    }

    if (n >= 10000000) {
        solve(n / 10000000);
        printf(" kuti");
        n %= 10000000;
    }

    if (n >= 100000) {
        printf(" %lld lakh", n / 100000);
        n %= 100000;
    }

    if (n >= 1000) {
        printf(" %lld hajar", n / 1000);
        n %= 1000;
    }

    if (n >= 100) {
        printf(" %lld shata", n / 100);
        n %= 100;
    }

    if (n > 0) {
        printf(" %lld", n);
    }
}

int main() {
    long long n;
    int case_num = 1;

    while (cin >> n) {
        printf("%4d.", case_num++);

        if (n == 0) {
            printf(" 0");
        } else {
            solve(n);
        }
        printf("\n");
    }

    return 0;
}
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1042&mosmsg=Submission+received+with+ID+30742440