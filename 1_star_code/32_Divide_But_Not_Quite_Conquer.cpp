// 10190 - Divide, But Not Quite Conquer!
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    while (cin >> n >> m) {
        if (m <= 1 || n == 0 || n < m) {
            cout << "Boring!" << '\n';
            continue;
        }

        vector<long long> v;
        v.push_back(n);

        bool isBoring = false;
        while (n > 1) { 
            if (n % m != 0) {
                isBoring = true;
                break;
            }
            n /= m;
            v.push_back(n);
        }

        if (!isBoring) {
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << (i == v.size() - 1 ? "" : " ");
            }
            cout << '\n';
        } else {
            cout << "Boring!" << '\n';
        }
    }
    return 0;
}