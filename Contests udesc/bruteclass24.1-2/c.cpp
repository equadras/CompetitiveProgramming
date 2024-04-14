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

    string s; cin >> s;
    vector<int> a(n);
    map<int,int> mp1;
    map<int,int> mp2;

    for (int i = 0; i < n;i++){
        mp1[s[i]]++;
        a[i] = mp1.size();
    }

    vector<int> suf(n);
    for (int i = n-1; i >= 0; i--) {
        mp2[s[i]]++;
        suf[i]=mp2.size();
    }

    int res = 0;
    for (int i = 0; i < n-1;i++){
        int x = a[i];
        int y = suf[i+1];

        res = max(res,x+y);
    }

    cout << res << endl;
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



