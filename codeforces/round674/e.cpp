#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    int a1,a2,a3, b1,b2,b3; cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    int mi = 0, ma = 0;
    ma = min(a1,b2) + min(a2,b3) + min(a3,b1);
    if (a1>b3+b1) mi += (a1-(b1+b3));
    if (a2>b1+b2) mi += (a2-(b1+b2));
    if (a3>b2+b3) mi += (a3-(b2+b3));
    cout << mi << " " << ma;
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}


