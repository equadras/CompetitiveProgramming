#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

bool cmp(pair<string, int>& a, pair<string, int>& b){ return a.second <= b.second;}

void sort(map<string, int>& M){
    vector<pair<string, int> > A;
    for (auto& it : M) A.push_back(it);
    sort(A.rbegin(), A.rend(), cmp);
    for (auto& it : A) cout << it.first << endl;
}

void solve(){
    int n; cin >> n;
    map <string,int> mp;

    for (int i = 0; i < n; i++){
        string s; cin >> s;
        mp[s]++;
    }
    sort(mp);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
