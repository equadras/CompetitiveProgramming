#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    string x; cin >> x;
    x='0'+ x;
    int k = x.size();
    for(int i = x.size(); i >= 0; i--){
        if(x[i] >= '5'){
            x[i-1]++;
            k = i;
        }
    }
    
    for(int i = (x[0] == '0'); i < x.size(); i++){
        cout << (i >= k ? '0' : x[i]);
    }
    cout << endl;
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
