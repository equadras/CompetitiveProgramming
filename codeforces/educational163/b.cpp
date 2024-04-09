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
    
    vector<int> x;
    x.push_back(a[n-1]);
    for (int i = n-2; i >= 0; i--){
        int at = a[i];
        if (a[i] > x.back()){
            x.push_back(at % 10);
            x.push_back(at / 10);
        }
        else x.push_back(at);
    }    
    for (int i = 0; i < int(x.size()) -1; i++){
        if (x[i] < x[i+1]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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


