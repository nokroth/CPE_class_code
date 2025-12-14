// 10235 - Simply Emirp
#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int reverse_num(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int n;
    while (cin >> n) {
        if (!is_prime(n)) {
            cout << n << " is not prime.\n";
        } else {
            int rev_n = reverse_num(n);
            
            if (rev_n != n && is_prime(rev_n)) {
                cout << n << " is emirp.\n";
            } else {
                cout << n << " is prime.\n";
            }
        }
    }
    return 0;
}