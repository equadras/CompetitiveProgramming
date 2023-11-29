#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    int mn = 1e9+5;

    for (int i = 0; i < n; i++){
        cin >> a[i];
        mn = min(mn, a[i]);
    }

    int res = 0, x = 0;

    for (int i = 0; i < n; i++){
        if (a[i] == mn){
            x = i;
            break;
        }
        res++;
    }
    cout << (is_sorted(a.begin() + x, a.end()) ? res : -1) << endl;
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
