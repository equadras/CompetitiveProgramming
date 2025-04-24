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
    int n, x; cin >> n >> x;
    
    if (n == x){
        for (int i = 0; i < n; i++)  cout << i << ' '; 
        cout << endl;
        return; 
    }

    vector<int> res;
    for (int i = 0; i < x; i++) cout << i << ' ';
    for (int i = x+1; i < n; i++) cout << i << ' ';
    cout << x << endl;

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




