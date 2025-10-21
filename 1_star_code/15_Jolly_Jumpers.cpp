// 10038 - Jolly Jumpers
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while (cin >> n){
        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        if (n == 1){
            cout << "Jolly\n";
            continue;
        }

        vector<bool> found(n, false); 

        bool isJolly = true;
        for (int i = 1; i < n; i++){
            int diff = abs(arr[i] - arr[i-1]);

            if (diff >= 1 && diff < n && !found[diff]){
                found[diff] = true;
            } else {
                isJolly = false;
                break;
            }
        }
        

        if (isJolly) {
            cout << "Jolly\n";
        } else {
            cout << "Not jolly\n";
        }
    }
}