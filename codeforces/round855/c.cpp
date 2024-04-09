#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    ll n; cin >> n;
    multiset<ll> st; 
    ll res = 0;
    for (ll i = 0; i < n; i++){
        ll x; cin >> x;
        if (x == 0 && st.size() > 0){
            res += *(--st.end());
            st.erase(--st.end());
        }
        st.emplace(x);
    }
    cout << res << endl;
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
