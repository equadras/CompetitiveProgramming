#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    map<string,int> mp;
    vector<string> ss(n);

    for (int i = 0; i < n; i++){
        cin >> ss[i];
        /* string s; cin >> s; */
        mp[ss[i]] = 1;
    } 

    for (int i = 0; i < n; i++){
        string s = ss[i]; 
        bool f = false;
        for (int j = 1; j < s.size(); j++){
            string pref = s.substr(0, j), suf = s.substr(j, s.size() - j);
            /* debug(mp, pref, suf); */
            
            if (mp[pref] && mp[suf]) f = true;
        }
        cout << f;
    }
    cout << endl;
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


