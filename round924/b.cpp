#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    set<int> st;
    vector<int> a;
    int res = 1;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        st.insert(x);
    }

    for (auto x:st) a.push_back(x);

    int m = st.size();
    for (int i = 0, j = 1; j < m; j++){
        while (a[j]-a[i]>=n){
            i++;
        }
        res = max(res, j-i+1);
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


