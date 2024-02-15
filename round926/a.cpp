#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<ll> a(n);
    ll mx = 0, mn = 1e9+5;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        a[i] = x;
        if (x < mn) mn = x; 
        if (x > mx) mx = x;
    }
    cout << mx - mn << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tc = 1;
    if(tc){
        cin >> tc;
        while(tc--) solve();
    } else solve();
    return 0;
}
