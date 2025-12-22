// 10062 - Tell me the frequencies!
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    int caseNum = 0;

    while (getline(cin, s)){
        if (caseNum > 0) cout << endl;
        caseNum++;

        pair <int, int> cnt[128];
        
        for(int i=0; i<128; i++) {
            cnt[i].first = 0;
            cnt[i].second = i;
        }

        for (auto i : s){
            if(i >= 0 && i < 128) { 
                cnt[int(i)].first++;
            }
        }

        sort(cnt, cnt + 128, cmp);

        for (int i = 0; i < 128; i++){
            if (cnt[i].first != 0) 
                cout << cnt[i].second << ' ' << cnt[i].first << '\n';
        }
    }
    return 0;
}