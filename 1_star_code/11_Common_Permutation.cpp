//10252 - Common Permutation
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    while (getline(cin, a) && getline(cin, b)) {
        vector<int> freq_a(26, 0);
        vector<int> freq_b(26, 0);

        for (char c : a) {
            if (c >= 'a' && c <= 'z') {
                freq_a[c - 'a']++;
            }
        }
        for (char c : b) {
            if (c >= 'a' && c <= 'z') {
                freq_b[c - 'a']++;
            }
        }
        for (int i = 0; i < 26; ++i) {
            int common_count = min(freq_a[i], freq_b[i]);
            for (int j = 0; j < common_count; ++j) {
                cout << (char)('a' + i);
            }
        }
        cout << endl;
    }

    return 0;
}