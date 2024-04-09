#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n, b; cin >> n >> b;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int res = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            res = max({res, b + (a[j] - a[i]) * (b / a[i]), b});
        }
    }
    cout << res << endl;

}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
