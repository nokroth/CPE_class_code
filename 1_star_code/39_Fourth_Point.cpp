// 10242 Fourth Point!!
#include <bits/stdc++.h>

using namespace std;

struct Point {
    double x, y;
};

int main() {
    Point p[4];
    while (cin >> p[0].x >> p[0].y >> p[1].x >> p[1].y 
               >> p[2].x >> p[2].y >> p[3].x >> p[3].y) {
        
        double ans_x, ans_y;
        
        // 判斷哪個點是重複的 (交點)
        if (p[0].x == p[2].x && p[0].y == p[2].y) {
            ans_x = p[1].x + p[3].x - p[0].x;
            ans_y = p[1].y + p[3].y - p[0].y;
        } 
        else if (p[0].x == p[3].x && p[0].y == p[3].y) {
            ans_x = p[1].x + p[2].x - p[0].x;
            ans_y = p[1].y + p[2].y - p[0].y;
        } 
        else if (p[1].x == p[2].x && p[1].y == p[2].y) {
            ans_x = p[0].x + p[3].x - p[1].x;
            ans_y = p[0].y + p[3].y - p[1].y;
        } 
        else {
            ans_x = p[0].x + p[2].x - p[1].x;
            ans_y = p[0].y + p[2].y - p[1].y;
        }

        cout << fixed << setprecision(3) << ans_x << ' ' << ans_y << '\n';
    }
    return 0;
}