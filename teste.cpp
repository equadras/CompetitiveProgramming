#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve () {
    int n; cin >> n;
    vector<int> cnt(n+1);
    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(num < n) ++cnt[x];
    }
     

    vector<int> m(n+1);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            m[j] +=cnt[i];
        }
    }
    cout << *max_element (m.begin(), m.end()); 
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 1;
    if (TC){
        cin >> TC;
        while (TC--) solve();
    } else {
        solve();
    }
    return 0;
}
