#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll k; cin >> k;
    string s; cin >> s;
    ll res = 0;
    for (ll i = 0; i < k; i++){
        res += (s[i] != '0' && s[i] != '6' && s[i] != '8');
    }
    cout << res << endl;
    return 0;
}


