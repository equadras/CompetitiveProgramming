#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;


void solve(){
    int n, k; cin >> n >> k;

    int minus[26] {}, maius[26] {};
    string s; cin >> s;

    for (auto c : s){
        if (islower(c)){
            minus[c - 'a'] += 1;
        } else {
            maius[c - 'A'] += 1;
        }
    }

    int mx = 0;
    int res = 0;
    for (int i = 0; i < 26; i++){
        mx += (minus[i] + maius[i]) / 2;
        res += min(minus[i], maius[i]);
    }

    res = min(res + k, mx);
    cout << res << endl;

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



