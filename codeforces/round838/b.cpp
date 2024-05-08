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
    int a[n][n];
    int a, c, d; cin >> a >> c >> d;

    //linha + d
    //coluna + c

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if (i == 0 && j == 0) a[i][j] =  a;
            a[i][j+1] = a[i][j] + d;
                   
        }
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



