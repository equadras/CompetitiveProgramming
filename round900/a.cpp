#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)cin >> a[i];
    if(k)
    for(int i = 0; i < n; i++)cin >> a[i];


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