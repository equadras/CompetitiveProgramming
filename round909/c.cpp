#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int ans = a[0];
    int mn = min(0, a[0]), sum = a[0];
    for (int i = 1; i < n; ++i){
        if (abs(a[i] % 2) == abs(a[i - 1] % 2)){
            mn = 0;
            sum = 0;
        }
        sum += a[i];
        ans = max(ans, sum - mn);
        mn = min(mn, sum);
    }
    cout << ans << endl;
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
