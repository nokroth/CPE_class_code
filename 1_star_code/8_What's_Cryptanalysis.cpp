//10008 - What's Cryptanalysis?
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, char> a, pair <int, char> b){
    return a.first > b.first;
}

int main(){
    int n;
    cin >> n;
    n++;
    map <char, int> ans;
    while (n--){
        string s;
        getline(cin, s);
        for (auto i : s){
            if (i >= 'A' && i <= 'Z' || i >= 'a' && i <= 'z'){
                ans[toupper(i)]++;
            }
        }
    }
    vector <pair <int, char> > v;
    for (auto i : ans){
        v.push_back({i.second, i.first});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto i : v){
        cout << i.second << ' ' << i.first << '\n';
    }
}
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=949&mosmsg=Submission+received+with+ID+30743096