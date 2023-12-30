#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

void solve(){
    int n; cin >> n;
    pair<int,int> a[n];
    ordered_set st;

    for (int i = 0; i < n; i++) cin >>a[i].first >>  a[i].second;

    sort(a,a+n);

    vector <int> v;

    for (int i = 0; i < n; i++){
        st.insert(a[i].second);
    }
    ll res = 0;
    for (int i = 0; i < n; i++){
        res += st.order_of_key(a[i].second);
        st.erase(a[i].second);
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
