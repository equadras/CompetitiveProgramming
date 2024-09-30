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
    
    map<int,int> mp;
    mp[a[0]]++;

    for (int i = 1; i < n; i++){
        
        /* debug(mp); */
        /* debug(mp[a[i]-1]); */
        /* debug(mp[a[i]+1]); */

        if (mp[a[i]-1] == 0 && mp[a[i]+1] == 0){
            cout << "No" << endl;
            return;
        }
        mp[a[i]]++;
    }

    cout << "Yes" << endl;
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



