// 10908 - Largest Square
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        int r, c, m;
        cin >> r >> c >> m;
        char mp[r][c];
        for (int i = 0; i < r; i++){
            cin >> mp[i];
        }
        cout << r << ' ' << c << ' ' << m << '\n';
        while (m--){
            int a, b;
            cin >> a >> b;
            int sqr = 1, ans = 1;
            bool is_square = true;
            while (1){
                int x1 = a - (sqr/2), x2 = a + (sqr/2), y1 = b - (sqr/2), y2 = b + (sqr/2);
                if (x1 < 0 || x2 >= r || y1 < 0 || y2 >= c){
                    break;
                }
                
                for (int i = x1; i <= x2; i++){
                    for (int j = y1; j <= y2; j++){
                        if (mp[i][j] != mp[a][b]){
                            is_square = false;
                        }
                    }
                }
                if (!is_square){
                    break;
                }
                ans = sqr;
                sqr += 2;
            }
            cout << ans << '\n';
        }
    }
}