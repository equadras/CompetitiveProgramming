#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    bool flag = false;
    for(int i = 0; i < n - 1; i++){
        if(v[i] < v[i+1]){
            flag = true;
        }
        if(flag && v[i] > v[i+1]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;

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
