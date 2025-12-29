// 10409 - Die Game
#include <iostream>

using namespace std;

struct dice{
    int top;
    int north;
    int west;
};

int main(){
    
    int n;
    while (cin >> n && n != 0){
        dice d = {1, 2, 3};
        for (int i = 0; i < n; i++){
            string s;
            cin >> s;
            if (s == "north"){
                swap(d.top, d.north);
                d.top = 7 - d.top;
            }else if (s == "south"){
                swap(d.top, d.north);
                d.north = 7 - d.north;
            }else if (s == "east"){
                swap(d.top, d.west);
                d.west = 7 - d.west;
            }else if (s == "west"){
                swap(d.top, d.west);
                d.top = 7 - d.top;
            }
        }
        cout << d.top << '\n';
    }
}