//10268 498-bis
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int x;
    while (cin >> x){
        string line;
        cin.ignore();
        getline(cin, line);

        vector <int> v; 
        stringstream ss(line);
        int a;
        while (ss >> a){
            v.push_back(a);
        }

        long long ans = 0;
        int n = v.size() - 1; 

        for (int i = 0; i < n; i++) {
            long long c_i = (long long)v[i] * (n - i);
            ans = ans * x + c_i;
        }
        
        cout << ans << '\n';
    }
    return 0;
}