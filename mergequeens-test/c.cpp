#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const ll maxn = 1e12+5;

vector<bool> sieve(ll n) {
    vector<bool> is_prime(n + 5, true);
    is_prime[0] = false;
    is_prime[1] = false;
    for (ll i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    ll n; cin >> n;
    ll p = sqrt(n);
    vector<bool> a = sieve(p+5);

    cout << (a[p] == 1 ? "YES" : "NO") << endl;

    return 0; }


