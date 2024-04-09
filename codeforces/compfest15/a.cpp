#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    int dist = 1e5+5;
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
        if(abs(a[i]) < dist) dist = abs(a[i]);
    }
    cout << dist << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
