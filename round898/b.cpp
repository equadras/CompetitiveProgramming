#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    int mn = 10;
    int mni = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < mn){
            mn = a[i];
            mni = i;
        }
    }
    int res = mn+1;
    for(int i = 0; i < n; i++){

        if(a[i] == mn && mni == i)continue;
        else res *= a[i];
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
