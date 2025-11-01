// 100 - The 3n + 1 problem
#include <bits/stdc++.h>

using namespace std;

// 使用 vector 來當作 dp 陣列，並初始化為 0
// dp[n] 將儲存從 n 開始到 1 的週期長度
vector<int> dp(1000001, 0);

// 計算 n 的週期長度的函式
int dfs(long long n) { // 使用 long long 避免中間過程溢位
    // 邊界條件：如果 n 超出我們 dp 陣列的範圍，就不要使用記憶化
    if (n >= dp.size()) {
        if (n % 2 == 0) {
            return 1 + dfs(n / 2);
        } else {
            return 1 + dfs(3 * n + 1);
        }
    }

    // 如果 dp[n] 已經計算過，直接回傳結果
    if (dp[n] != 0) {
        return dp[n];
    }

    // 如果沒計算過，就遞迴計算，並將結果存入 dp 陣列
    if (n % 2 == 0) {
        dp[n] = 1 + dfs(n / 2);
    } else {
        dp[n] = 1 + dfs(3 * n + 1);
    }
    
    return dp[n];
}

int main() {
    // 設定 base case
    dp[1] = 1;

    int i, j;
    while (cin >> i >> j) {
        int original_i = i;
        int original_j = j;

        // 【修正點】處理 i > j 的情況
        if (i > j) {
            swap(i, j);
        }

        int max_len = 0; // 【修正點】每次迴圈都要重設最大值

        for (int k = i; k <= j; k++) {
            max_len = max(max_len, dfs(k));
        }

        // 【修正點】依照正確格式輸出
        cout << original_i << " " << original_j << " " << max_len << endl;
    }

    return 0;
}
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36