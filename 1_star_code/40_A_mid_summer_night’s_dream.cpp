//10057 A mid-summer night’s dream
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    int n;

    while (cin >> n) {
        
        vector<int> numbers(n);
        for (int i = 0; i < n; ++i) {
            cin >> numbers[i];
        }

        sort(numbers.begin(), numbers.end());

        // 不論 n 是奇數還是偶數，
        // 最佳 A 的最小值 (A_low) 總是位於 index (n-1)/2
        // 最佳 A 的最大值 (A_high) 總是位於 index n/2
        
        // 如果 n 是奇數 (例如 n=5), (5-1)/2 = 2, 5/2 = 2
        // A_low 和 A_high 會是同一個數 (index 2)
        
        // 如果 n 是偶數 (例如 n=4), (4-1)/2 = 1, 4/2 = 2
        // A_low 會是 index 1, A_high 會是 index 2
        
        int A_low = numbers[(n - 1) / 2];
        int A_high = numbers[n / 2];

        // 輸出 1: 最小的可能 A 值
        int A_min = A_low;

        // 輸出 2: 原始輸入中有多少個數字落在 [A_low, A_high] 範圍內
        // 我們使用 C++ STL 的 lower_bound 和 upper_bound 來快速計數
        
        // 找到第一個 >= A_low 的元素
        auto it_low = lower_bound(numbers.begin(), numbers.end(), A_low);
        // 找到第一個 > A_high 的元素
        auto it_high = upper_bound(numbers.begin(), numbers.end(), A_high);
        
        // 兩個迭代器之間的距離就是答案
        int count_in_input = distance(it_low, it_high);
        
        // 輸出 3: 有多少個 "整數" A 可以滿足條件
        // (例如 A_low=2, A_high=3, 則 2 和 3 都可以, 總共 3-2+1 = 2 個)
        int possible_A_count = A_high - A_low + 1;

        // 5. 輸出結果
        cout << A_min << " " << count_in_input << " " << possible_A_count << endl;
    }

    return 0;
}