#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int x, y, n; cin >> x >> y >> n;
    vector<int> a(n);
    a[n-1] = y;
    int d = 1;
    for (int i = n-2;i >= 0;i--){
        a[i] = a[i+1] - d;
        d++;
    }
    if(x <= a[0]){
        a[0] = x;
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    } else {
        cout << -1 << endl;
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
