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
  int x, y; cin >> x >> y;
  int res = (y + 1) / 2;
  x -= 7 * (y / 2) + (y & 1) * 11;
  cout << max(0, (x + 14) / 15) + res << endl;

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



