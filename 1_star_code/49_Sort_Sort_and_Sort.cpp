// 11321 - Sort! Sort!! and Sort!!!
#include <bits/stdc++.h>

using namespace std;
int N, M; 

bool cmp(int a, int b) {
    if (a % M != b % M) return a % M < b % M;
    int a_odd = abs(a % 2);
    int b_odd = abs(b % 2);
    if (a_odd != b_odd) return a_odd > b_odd; 
    if (a_odd == 1) return a > b;
    return a < b;
}

int main() {
    vector<int> nums(10005);
    while (cin >> N >> M) {
        cout << N << " " << M << endl;
        if (N == 0 && M == 0) break;

        for (int i = 0; i < N; i++) cin >> nums[i];
        sort(nums.begin(), nums.begin() + N, cmp);
        for (int i = 0; i < N; i++) {
            cout << nums[i] << '\n';
        }
    }
    return 0;
}