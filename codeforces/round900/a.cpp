#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n, k; cin >> n >> k;
    vector<int> f(101);
    vector<int> arr(n);
    bool flag = false;
    for (int i=0; i < n; i++) {
        int num; cin >> num;
        if (num == k) flag = true;
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
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
