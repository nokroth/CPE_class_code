//10420 List of Conquests
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, int> ans;
    while (n--){
        string country, girl;
        cin >> country;
        getline(cin, girl);
        ans[country]++;
    }
    for (auto i : ans){
        cout << i.first << ' ' << i.second << '\n';
    }
}
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1361&mosmsg=Submission+received+with+ID+30742459