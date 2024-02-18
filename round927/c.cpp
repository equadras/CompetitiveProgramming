#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    ll n, m; cin >> n >> m;
    vector<ll> a(n);
    ll prod = 1;

    for (ll i = 0; i < n; i++){
        cin >> a[i];
        prod *= a[i];
    }
    string s; cin >> s;

    ll l = 0, r = n-1;
    ll i = 0; 
    while (n--){
        char  c = s[i++];

        /* cout << prod << "%" << m << " = "; */

        cout << prod % m << " ";
        if (c == 'L'){
            prod = prod / a[l];
            l++;
        }
        else if (c == 'R'){
            prod = prod / a[r];
            r--;
        }
    }

    cout << endl; 
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
