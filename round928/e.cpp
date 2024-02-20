#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

//debug
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
#ifndef ONLINE_JUDGE
#define debarr(arr, n) cerr << "arr: ["; forn(i, n) cerr << arr[i] << (i == n-1 ? "" : ", "); cerr << "]" << endl;
#else
#define debarr(x...)
#endif

void solve(){
    ll n, k; cin >> n >> k;

    ll mt = (n+1)/2;

    if (k <= mt){
        cout << k*2-1 << endl;
        return;
    }
    ll x = 2;
    k -= mt;

    for (ll i = 2; i <= n; i*=2){
        ll l = 1, r = n/2;
        ll mt = 1;
        while (l <= r){
            ll mid = (l+r)/2;
            /* debug(l, mid, r, n, mt, k); */

            if (i * (mid*2-1) <= n){
                mt = mid;
                l = mid + 1;
            } else r = mid-1;
        }
        if (k <= mt){
            cout << i*(k*2)-1 << endl;
            cout << i*(k*2-1) << endl;
            return;
        }
        k -= mt;
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


