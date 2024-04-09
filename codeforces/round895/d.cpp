#include <bits/stdc++.h>

using namespace std;
#define int long long



void solve(){

    int n, x, y; cin >> n >> x >> y;
    int mmc = lcm(x, y);
    int pos = n / x - n / mmc;
    int neg = n / y - n / mmc;
    int npos = ((n - (n - pos+1) + 1) * ((n-pos+1) + n)) / 2;
    int nneg = ((neg - 1 + 1) * (1 + neg)) / 2;
    int res = npos - nneg;

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
