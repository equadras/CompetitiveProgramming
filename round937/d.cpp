#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;


bool zeroum(int x){
    while (x > 0){
        int num = x % 10;
        if (num != 0 && num != 1) return false;
        x /= 10;
    }
    return true;
}

bool check(int n){
    if (zeroum(n)) return true;

      while (n % 2 == 0){
        n /= 2;
        debug(n);
    }

    for (int i = 3; i * i <= n; i += 2){
        while (n % i == 0){
            debug(n);
            if (!zeroum(i)) return false;
            n /= i;
        }
    }

    if (n > 1 && !zeroum(n)) return false;

    return true;
}

void solve(){
    int n; cin >> n;
    if (check(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
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


