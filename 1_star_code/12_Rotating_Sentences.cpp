//490 - Rotating Sentences
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> st;
    string line;
    size_t maxlength = 0;

    while (getline(cin, line)) {
        st.push_back(line);
        if (line.length() > maxlength) {
            maxlength = line.length();
        }
    }
    for (size_t i = 0; i < maxlength; ++i) {
        for (int j = st.size() - 1; j >= 0; --j) {
            if (i < st[j].length()) {
                cout << st[j][i];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}