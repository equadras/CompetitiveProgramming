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
    vector <int> a(n);
    for (auto &i : a) cin >> i;

    vector <int> imp;
    vector <int> p;
    for (auto e : a){
        if (e & 1) imp.push_back(e);
        else p.push_back(e);
    }

    sort(p.begin(), p.end());
    sort(imp.begin(), imp.end());

    vector <int> res;
    int j = 0, k = 0;

    for (int i = 0;i < n; i++){
        if (a[i] & 1) res.push_back(imp[k++]);
        else res.push_back(p[j++]);
    }

    sort (a.begin(), a.end());
    /* debug(a,res); */
    cout << (a == res ? "YES" : "NO") << endl;
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



