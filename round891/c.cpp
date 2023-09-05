#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n;
    int m = n*(n-1)/2;
    vector<int> b(m);

    for(int i=0; i<m; i++) cin >> b[i];

    sort(b.begin(),b.end());

    for(int i=0; i<m; i+=--n) cout << b[i] << ' ';
    int max = 10e3;
    cout<< max << "\n";
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
