#include <bits/stdc++.h>

using namespace std;
//#define int long long

int cost(string& a, string& b) {
    int val = 0;
    for(int i = 0; i < a.size(); ++i) {
        val += abs(a[i] - b[i]);
    }
    return val;
}
void solve(){
    int n, m; cin >> n >> m;
    vector<string> s(n);
    for(int i=0; i<n;i++){
        cin >> s[i];
    } 
    int ans = 1e7+5;
    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            ans = min(ans,cost(s[i], s[j]));
        }
    }
    cout << ans << endl;
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
