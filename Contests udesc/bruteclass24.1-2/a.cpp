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
    int a[26];

    for (int i = 0; i < 26; i++) a[i] = -1;

    for (int i = 0; i < n; i++) {
        if (a[(s[i] - 'a')] == -1) {
            a[(s[i] - 'a')] = (i % 2);
        }
        else {
            if (a[(s[i] - 'a')] != (i % 2)){
                cout << "NO" << endl; 
                return;
            }

        }
    }
    cout << "YES" << endl;
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



