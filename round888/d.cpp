#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n; cin >> n;
    int cnt = 0;
    vector<int> v(n - 1);
    for (int i = 0; i < v.size(); i++) cin >> v[i];

    set<int> st;
    for (int i = 1; i <= n; i++){
        st.insert(i);
    }

    int diff = 0;
    if (v.front() > n){
        cnt++;
        diff = v.front();
    } else {
        st.erase(v.front());
    }

    for (int i = 1; i < v.size(); i++){
        if (st.find(v[i] - v[i - 1]) != st.end()){
            st.erase(v[i] - v[i - 1]);
        } else {
            cnt++;
            diff = v[i] - v[i - 1];
        }
    }
    if (cnt > 1){
        cout << "NO" << endl;
        return;
    } else if (cnt == 1){
        if (st.size() != 2){
            cout << "NO" << endl;
            return;
        }
        for (auto ele: st)
            diff -= ele;
        if (diff == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else {
        if (st.size() == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
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
