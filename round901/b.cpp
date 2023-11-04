#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    int res = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(k & 1){
        if(a[0] < b[m-1]) swap(a[0], b[m-1]);
        int res = 0;
        for(int i = 0; i < n; i++){
            res += a[i];
        }
        cout << res << endl;
    }
    else {
        if(a[0] < b[m-1]) swap(a[0], b[m-1]);

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        if(b[0] < a[n-1]) swap(a[n-1], b[0]);
        int res = 0;
        for(int i = 0; i < n; i++){
            res += a[i];
        }
        cout << res << endl;
    }
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
