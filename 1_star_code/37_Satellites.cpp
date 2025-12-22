// 10221 - Satellites
#include <bits/stdc++.h>

using namespace std;

int main(){
    double n, m;
    string s;
    while (cin >> n >> m >> s){
        double r = n + 6440;
        if (s == "min")  m/= 60.0;
        while (m > 360) m -= 360;
        if (m > 180) m = 360.0 - m;
        double the = m * acos(-1) / 180.0;
        double ans1 = r * the;
        double ans2 = 2 * r * sin(the/2);
        cout << fixed << setprecision(6) << ans1 << ' ' << ans2 << '\n';
    }
}