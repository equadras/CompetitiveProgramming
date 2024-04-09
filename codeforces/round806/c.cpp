#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;

    for (int i = 0; i < n; i++){
        int x; cin >> x;

        int cnt = 0;
        while (x--){
            char c; cin >> c;
            if (c == 'U'){
                cnt--;
            }
            else if (c == 'D'){
                cnt++;
            }
        }
            /* debug(a[i],cnt); */
            a[i] = (a[i] + cnt);
            if (a[i] < 0) a[i] += 10;
            else if (a[i] > 9) a[i] = (a[i]-1) % 9;
            /* debug(a[i],cnt); */
    }

    for (auto e : a){
        /* if (e > 10) cout << (e-1)% 9 << " "; */
        /* else if (e < 0) cout << (e+1)% 9 << " "; */
         cout << e << " ";
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


