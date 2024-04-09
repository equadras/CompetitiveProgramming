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
    int n, sz = 26; cin >> n;

    string mins = "zzz", cur;

    for (int i = 0; i < sz; i++){
        for (int j = 0; j < sz; j++){
            for (int k = 0; k < sz; k++){
                if (i + j + k + 3 == n){
                    cur += char(i + 'a');
                    cur += char(j + 'a');
                    cur += char(k + 'a');
                    mins = min(cur, mins);
                }
            }
        }
    }
    cout << mins << endl;
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



