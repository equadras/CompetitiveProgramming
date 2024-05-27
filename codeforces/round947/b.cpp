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
    int mn = *min_element(a.begin(),a.end());
    vector<int> aux;
    for (int i = 0; i < n; i++){
        if (a[i] % mn != 0) aux.push_back(a[i]);
    }
    if (!(aux.size())) cout << "Yes" << endl;
    else {
        int mn2 = *min_element(aux.begin(),aux.end());
        bool f = false;
        for (int i = 0; i < (int) aux.size(); i++){
            if (aux[i] % mn2 != 0) f = true;
        }
        cout << (f ? "No" : "Yes") << endl;

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



