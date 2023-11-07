#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int a, b, c; cin >> a >> b >> c;
    if (c % 2 == 1) a++;
    if (a > b){
        cout << "First" << endl;
        return;
    }
    
    cout << "Second" << endl;
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
