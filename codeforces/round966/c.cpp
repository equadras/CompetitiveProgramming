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
    vector<int> a(n);
    for (int &i : a) cin >> i;

    int q; cin >> q;
    while (q--){
        string s; cin >> s;
        bool f = 0;

        if ((int) s.size() != n) f = 1;

        map<char,int> mp;
        map<int,char> mp2;

        for (int i = 0; i < n; i++){
            if (!mp2[a[i]]){
                mp2[a[i]] = s[i];
                if (mp[s[i]]){ f = true; break; }
                mp[s[i]]++;
            }

            if (s[i] != mp2[a[i]]){
                f = true;
                break;
            }
        }
        cout << (f ? "No" : "Yes") << endl;
    }
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



