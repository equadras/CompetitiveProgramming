#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    map <string,int> mp;

    for(int i = 1; i < n; i++){
        string x;
        x.push_back(s[i-1]);
        x.push_back(s[i]);
        mp[x] = 1;
    }
    cout << mp.size() << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 1;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
