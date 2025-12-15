// 10057 - A mid-summer night's dream.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int num1 = arr[(n - 1) / 2];
        int num2 = arr[n / 2];

        int min_A = num1;
        int count = 0;

        for (int x : arr) {
            if (x == num1 || x == num2) {
                count++;
            }
        }

        int pa = num2 - num1 + 1;

        cout << min_A << " " << count << " " << pa << endl;
    }
    return 0;
}