#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    int cum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cum += a[i]; 
    }

    int l = 1, r = cum;
 
    while (l <= r){
        int mid = (l + r) / 2;
        int r = mid * mid;
        if (r == cum){
            cout << "YES" << endl;
            return;
        }
 
        if (r < cum) l = mid + 1;
 
        else r = mid - 1;
    }
 
    cout << "NO" << endl;


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
