#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n; 
    string arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int res = 0;
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){
            int n1 = arr[i][j];
            int n2 = arr[j][n-1-i];
            int n3 = arr[n-1-i][n-1-j];
            int n4 = arr[n-1-j][i];
            int mx = max({n1,n2,n3,n4});
            res += (mx-n1) + (mx-n2) +(mx-n3) + (mx-n4);
        } 
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
