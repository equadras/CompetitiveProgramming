#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int l = n+1, r = -1;
    for (int i = 0; i < n; i++){
        if (s[i] == 'B'){
            l = min(l,i+1);
            r = max(r,i+1);
            /* cout << l << " " << r << endl; */
        }
    }
    cout << r-l + 1 << endl;
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
