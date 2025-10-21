//12019 - Doom's Day Algorithm
#include <bits/stdc++.h>

using namespace std;

int main(){
    string date[7] = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n;
    cin >> n;
    while (n--){
        int mon, day;
        cin >> mon >> day;
        int now = 0;
        for (int i = 1; i < mon; i++){
            now += days[i];
        }
        now += day;
        cout << date[now%7] << '\n';
    }
}