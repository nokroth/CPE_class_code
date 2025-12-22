// 10642 - Can You Solve It?
#include <iostream>

using namespace std;

long long getPosition(long long x, long long y) {
    long long sum = x + y;
    // 計算之前完整層級的點數總和
    long long previousPoints = sum * (sum + 1) / 2;
    
    // 加上當前層級的偏移量 (x)
    return previousPoints + x;
}

int main() {
    int n;
    if (cin >> n) {
        for (int i = 1; i <= n; ++i) {
            long long x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            // 分別計算兩點的絕對位置
            long long step1 = getPosition(x1, y1);
            long long step2 = getPosition(x2, y2);
            cout << "Case " << i << ": " << (step2 - step1) << endl;
        }
    }

    return 0;
}