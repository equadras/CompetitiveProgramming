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
    vector<int> a(n+1);
    int mni = 0;

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i < n; i++){
        if (a[i] > a[i+1]){
            mni = i;
            break;
        }
    }
    if (!mni){
        cout << "Yes" << endl;
        return;
    }
    
    for (int i = mni+1; i <= n; i++){
        int j = (i%n)+1;
        if (a[i] > a[j]){
            cout << "No" << endl;
            return;
        }
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



