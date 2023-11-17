#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

const int maxn = 150000+5;
int a[maxn];

void solve(){
    int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] += a[i - 1];
	}

    int ans = 0;
	for (int k = 1; k <= n; k++) {
		if (n % k == 0) {
			int mx = 0, mn = 1e18;
			for (int j = k; j <= n; j += k) {
				int val = a[j] - a[j - k];
				mx = max(mx, val);
				mn = min(mn, val);
			}
			ans = max(ans, mx - mn);
		}
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
