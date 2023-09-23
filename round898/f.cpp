#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> h(n + 1), a(n + 1);
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }
    int ans = 0;
    vector<ii> pq;
    pq.emplace_back(0, 0);
    for (int i = 1; i <= n; i++) {
        // p[i] - x < k
        // p[i] - k < x
        if (i > 1 && h[i - 1] % h[i]) {
            pq.clear();
            pq.emplace_back(p[i - 1], i - 1);
            pq.emplace_back(p[i], i);
            if (a[i] <= k) {
                ans = max(ans, 1);
            }
        }
        int lb = lower_bound(pq.begin(), pq.end(), ii(p[i] - k, -1)) - pq.begin();
        if (lb < (int)pq.size()) {
            auto [v, id] = pq[lb];
            ans = max(ans, i - id);
        }
        pq.emplace_back(p[i], i);
    }
    cout << ans << endl;
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
