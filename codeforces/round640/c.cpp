#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n, k; cin >> n >> k;
    int  l = 0, r = 2*k;
    while (l < r){
        int mid = (l + r) / 2;
        if (mid - mid / n >= k) r = mid;
        else l = mid + 1;
    }
    cout << l << endl;
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
