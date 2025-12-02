// 11005 - Cheapest Base
#include <bits/stdc++.h>

using namespace std;

// 儲存 36 個字元的成本
int costs[36];

// 計算數字 n 在 base 進位制下的成本
long long calculate_cost(long long n, int base) {
    if (n == 0) return costs[0]; // 特例：0 永遠是 '0'
    
    long long total_cost = 0;
    while (n > 0) {
        int digit = n % base; // 取得當前位數的值 (0-35)
        total_cost += costs[digit]; // 加上該字元的成本
        n /= base; // 往下一位
    }
    return total_cost;
}

int main() {
    // 加速 I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num_cases;
    cin >> num_cases;
    for (int t = 1; t <= num_cases; ++t) {
        // 題目要求案例之間要有空行，但第一個案例前不用
        if (t > 1) cout << endl;

        // 讀取 36 個字元的成本
        for (int i = 0; i < 36; ++i) {
            cin >> costs[i];
        }

        int num_queries;
        cin >> num_queries;

        cout << "Case " << t << ":" << endl;

        while (num_queries--) {
            long long target;
            cin >> target;

            long long min_cost = -1; // 初始化為 -1 代表尚未設定，或設為極大值
            vector<int> best_bases;

            // 嘗試從 Base 2 到 Base 36
            for (int base = 2; base <= 36; ++base) {
                long long current_cost = calculate_cost(target, base);

                if (min_cost == -1 || current_cost < min_cost) {
                    min_cost = current_cost;
                    best_bases.clear();
                    best_bases.push_back(base);
                } else if (current_cost == min_cost) {
                    best_bases.push_back(base);
                }
            }

            // 輸出結果
            cout << "Cheapest base(s) for number " << target << ":";
            for (int b : best_bases) {
                cout << " " << b;
            }
            cout << endl;
        }
    }
    return 0;
}