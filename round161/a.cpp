#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int a, x, y;
    for (int j = 0; j < 5; j++){
        for (int i = 0; i < 5; i++){
            cin >> a;
            if (a == 1){
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x - 2) + abs(y - 2) << endl;
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
