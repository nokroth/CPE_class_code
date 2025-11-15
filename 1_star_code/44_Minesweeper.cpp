//10189 - Minesweeper
#include <bits/stdc++.h>
#define f first
#define s second

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
    int r, c;
    int tm = 1;
    while (cin >> r >> c){
        if (r == 0 && c == 0) break;
        if (tm > 1) cout << '\n';
        string mp[r];
        vector <pair <int, int> > v;
        set <pair <int, int> > s;
        for (int i = 0; i < r; i++){
            cin >> mp[i];
            for (int j = 0; j < c; j++){
                if (mp[i][j] == '*'){
                    v.push_back({i, j});
                    s.insert({i, j});
                }
            }
        }
        int vis[r][c];
        memset(vis, 0, sizeof(vis));
        for (auto i : v){
            int x = i.f, y = i.s;
            for (int j = 0; j < 8; j++){
                int nx = x + dx[j];
                int ny = y + dy[j];
                if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
                vis[nx][ny]++;
            }
        }
        cout << "Field #" << tm++ << ":\n";
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if (!s.count({i, j})) cout << vis[i][j];
                else cout << '*';
            }
            cout << '\n';
        }
        
    }
}