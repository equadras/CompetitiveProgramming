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
    sort(v.begin(), v.end(), greater<int>());

    for(int i = 1; i < n; i++){
        if(!(v[i] < v[i-1])){
            flag = true;
        }
    }
    if(!flag || n == 1)cout << "YES\n";
    else {cout << "NO\n";}
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
