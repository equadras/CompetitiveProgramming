#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

ll MOD = 1e9 + 7;
const ll maxn = 1e6+10;
ll fat[maxn];
ll a[maxn];

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0){
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, q; cin >> n >> q;
    map<int, int> mp;

    fat[1] = 1;
    for (int i = 2; i <= n; i++) fat[i] = fat[i-1] * i % MOD;
    ll res = binpow(fat[n], MOD - 2);

    for (int i = 1; i <= n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto ele : mp) res = res*fat[ele.second] % MOD;

    cout << res << endl;

    while (q--){
        int x, y; cin >> x >> y;
        res = res*binpow(mp[a[x]],MOD - 2) % MOD;
        mp[a[x]]--;
        mp[y]++;
        a[x] = y;
        res = 1LL * res * mp[y] % MOD;
        cout << res << endl;
    }
    return 0;
}
