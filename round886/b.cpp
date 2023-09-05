#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n;
    int a, b,r, maxb = -1;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a > 10) continue;
        if(b > maxb){
            maxb = b;
            r = i+1;
        }
        /* cout << "a = " << a << "\nb = " << b << "\nmaxb == "<< maxb << "\nr = " << r << endl; */
    }
    cout << r << endl;
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
