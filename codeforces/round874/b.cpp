#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int,int>> a;
    vector<pair<int,int>> b;
    for (int i = 0; i < n; i++){
        /* cin >> a[i].first; */
        /* a[i].second = i; */
        int x; cin >> x;
        a.push_back({x,i});
    }
    for (int i = 0; i < n; i++){
        /* cin >> b[i].first; */ 
        /* b[i].second = i; */
        int x; cin >> x;
        b.push_back({x,i});
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> res (n);
    for (int i = 0; i < n; i++){
        int x = a[i].second;
        res[x] = b[i].first;
    }
    for (int i = 0; i < n; i++) cout << res[i] << " ";
    cout << endl;
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
