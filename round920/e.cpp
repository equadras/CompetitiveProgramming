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
    ll h, w, xa, ya, xb, yb;
    cin >> h >> w >> xa >>ya >> xb >>yb;
    ll d = xb - xa;
    if (d <= 0){
        cout << "Draw" << endl;
        return;
    }
    ll e = abs(ya - yb);
    if (d % 2){
        if (e <= 1){
            cout << "Alice" << endl;
            return;
        }
        /* ll dt; */
        /* if (ya < yb) dt = w - yb; */
        /* else dt = yb -1; */
        /* debug(dt,lg); */
        ll dt = (ya < yb) ? w - yb: yb - 1;
        /* debug(dt,lg); */
        ll lg = ceil((long double)d / 2);

        if (dt < lg - 1 && e <= lg - dt)
            cout << "Alice" << endl;
        else
            cout << "Draw" << endl;
    } else {
        if (ya == yb){
            cout << "Bob" << endl;
            return;
        }
        ll dt = (ya < yb)? ya - 1: w - ya;
        ll lg = d / 2;
        if (dt < lg && e <= lg - dt) cout << "Bob" << endl;
        else cout << "Draw" << endl;
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



