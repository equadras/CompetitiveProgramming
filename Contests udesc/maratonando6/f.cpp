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
    vector <int> a(n);

    for (int &i : a) cin >> i;

    vector<int> f(n);
    for (int i = 0; i < n; i++){

        auto x = find(f.begin(), f.end(), a[i]) - f.begin();

        char c = x + 'a'; cout << c; 
        f[x]++;
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



