// 10226 - Hardwood Species
#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    if (cin >> n) {
        string dummy;
        getline(cin, dummy);
        getline(cin, dummy);
    }

    while (n--) {
        map<string, int> trees;
        string line;
        int total = 0;

        // 持續讀取每一行，直到遇到空行 (代表這一組測資結束) 或檔案結束 (EOF)
        while (getline(cin, line) && !line.empty()) {
            trees[line]++;
            total++;
        }

        for (auto& it : trees) {
            cout << it.first << " " << fixed << setprecision(4) << (double)it.second / total * 100.0 << endl;
        }

        if (n > 0) cout << endl;
    }

    return 0;
}