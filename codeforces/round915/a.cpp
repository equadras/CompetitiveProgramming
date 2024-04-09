#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;
void solve(){
    int a, b; cin >> a >> b;
    cout << max(a,b) << endl;
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


