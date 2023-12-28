#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    int cum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        cum += a[i]; 
    }
    int r = sqrt(cum);
    if (r * r == cum) cout << "YES" << endl;
    else cout << "NO" << endl;

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

