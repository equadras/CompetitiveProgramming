#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n; cin >> n;
    vector <int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    
    int pp = 0, pi = 0;
    map<int, int> mp;

    mp[0] = -1;

    for (int i = 1; i <= n; ++i){
        if (i & 1) pi += a[i];
        else pp += a[i];

        int diff = pp - pi;

        if (mp.find(diff) != mp.end()){
            cout << "YES" << endl;
            return;
        } 
        else mp[diff] = i;
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
