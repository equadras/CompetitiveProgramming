#include <bits/stdc++.h>

using namespace std;
#define ll long long
//#define int long long

void solve(){
    int n; cin >> n;
    vector<ll> a(n);
    ll min = 1e7+5;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < min) min = a[i];
    }

    ll res = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == min) continue;
        res += a[i] - min;
    }
    cout << endl;
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
