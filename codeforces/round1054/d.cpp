#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
#define int long long
/* typedef long long ll; */

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int> pfa, pfb, sfa, sfb;
    int cnt = 0;

    pfa.push_back(0);
    for (int i = 0; i < n; i++){
        if (s[i] == 'b'){
            pfa.push_back(pfa.back());
            cnt++;
        }
        else pfa.push_back(pfa.back()+cnt);
    }

    cnt = 0;
    sfa.push_back(0);
    for (int i = n - 1; i >= 0; i--){
        if (s[i] == 'b'){
            sfa.push_back(sfa.back());
            cnt++;
        }
        else sfa.push_back(sfa.back() + cnt);
    }

    cnt = 0;
    pfb.push_back(0);
    for (int i = 0; i < n; i++){
        if (s[i] == 'a'){
            pfb.push_back(pfb.back());
            cnt++;
        }
        else pfb.push_back(pfb.back() + cnt);
    }

    cnt = 0;
    sfb.push_back(0);
    for (int i = n - 1; i >= 0; i--){
        if (s[i] == 'a') {
            sfb.push_back(sfb.back());
            cnt++;
        }
        else sfb.push_back(sfb.back() + cnt);
    }

    reverse(sfa.begin(),sfa.end());
    reverse(sfb.begin(),sfb.end());

    int res = LLONG_MAX;
    for (int i = 0; i < n; i++){
        res = min(res, sfa[i] + pfa[i]);
        res = min(res, sfb[i] + pfb[i]);
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


