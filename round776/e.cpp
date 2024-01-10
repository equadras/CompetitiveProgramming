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

const int inf = (int)1e9;

int t, n, d;
const int lim = 200200;
int a[lim];
int rest, b[lim];
int prefmin[lim], prefmax[lim], sufmin[lim], sufmax[lim];

void precalc() {
    prefmin[0] = prefmax[0] = b[0];
    for (int i = 1; i < n; i++) {
        prefmin[i] = min(prefmin[i - 1], b[i]);
        prefmax[i] = max(prefmax[i - 1], b[i]);
    }
    sufmin[n - 1] = sufmax[n - 1] = b[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        sufmin[i] = min(sufmin[i + 1], b[i]);
        sufmax[i] = max(sufmax[i + 1], b[i]);
    }
}

int pegamin(int l, int r) {
    if (l > r) return inf;
    if (l < 0 || l >= n) return inf;
    if (r < 0 || r >= n) return inf;
    if (l == 0) return prefmin[r];
    if (r == n - 1) return sufmin[l];
    return inf;
}

int pegamx(int l, int r) {
    if (l > r) return -inf;
    if (l < 0 || l >= n) return -inf;
    if (r < 0 || r >= n) return -inf;
    if (l == 0) return prefmax[r];
    if (r == n - 1) return sufmax[l];
    return -inf;
}

void solve() {
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        if (i == 0) b[i] = a[i];
        else b[i] = a[i] - a[i - 1] - 1;
    }
    precalc();
    rest = d - 1 - a[n - 1];
    int res = *min_element(b, b + n);

    for (int i = 0; i < n; i++){
        int atual;
        if (i + 1 < n) {
            atual = pegamin(0, i - 1);
            atual = min(atual, b[i] + b[i + 1] + 1);
            atual = min(atual, pegamin(i + 2, n - 1));
            atual = min(atual, d - 1 - a[n - 1] - 1);
            res = max(res, atual);
        } else {
            atual = pegamin(0, n - 2);
            atual = min(atual, d - 1 - a[n - 2] - 1);
            res = max(res, atual);
        }
    }

    for (int i = 0; i + 1 < n; i++){
        int atual = pegamin(0, i - 1);
        atual = min(atual, pegamin(i + 2, n - 1));
        atual = min(atual, (b[i] + b[i + 1]) / 2);
        res = max(res, atual);
    }

    for (int i = 0; i + 1 < n; i++){
        int atual = pegamin(0, i - 1);
        atual = min(atual, pegamin(i + 2, n - 1));
        atual = min(atual, b[i + 1] + b[i] + 1);
        int mx = pegamx(0, i - 1);
        mx = max(mx, pegamx(i + 2, n - 1));
        atual = min(atual, (mx - 1) / 2);
        res = max(res, atual);
    }
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


