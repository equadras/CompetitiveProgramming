#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    set<int> v;
    for(int i = 0; i < 3; i++){
        int in; cin >> in;
        v.insert(in);
    }
    
    int cnt = 0;
    for(auto i: v){
        if(cnt == 1) cout << i << "\n";
        cnt ++;
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
