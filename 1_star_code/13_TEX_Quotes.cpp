//272 - TEX Quotes
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string line;
    bool open_quote = true;

    while (getline(cin, line)) {
        for (char c : line) {
            if (c == '"') {
                if (open_quote) {
                    cout << "``";
                } else {
                    cout << "''";
                }
                open_quote = !open_quote;
            } else {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}
