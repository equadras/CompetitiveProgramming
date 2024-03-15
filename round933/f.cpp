#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int maxn = 2e5+5;

vector<int> a(maxn);
vector<int> b(maxn);
vector<int> c(maxn);
ll pos;

int calc(int x){
	return max(x-a[pos-1],a[pos]-x);
}

void solve(){
    ll n, m, k; cin >> n >> m >> k;

	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
	for (int i = 0; i < k; i++) cin >> c[i];

	ll mx1 = 0, mx2 = 0;
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());

	m = unique(b.begin(),b.end()) - b-1;
	k = unique(c.begin(),c.end()) -c-1;

	for (int i = 1; i < n; i++){
		if (a[i]-a[i-1] > mx1) mx2 = mx1, mx1 = a[i]-a[i-1], pos = i;
		else if (a[i]-a[i-1] > mx2) mx2 = a[i]-a[i-1];
	} 
    int res = mx1;

	for (int i = 0; i < m; i++){
		int l = 1, r = k-1;
        res = min(res, calc(b[i]+c[k]));

		while (l <= r){
			int mid = (l+r) /2;
            int res1 = calc(b[i] + c[mid]);
            int res2 = calc(b[i] + c[mid+1]);

			if (res1 <= res2) r = mid - 1;
			else l = mid + 1;

            res = min(res, res1);
		}
	}
    cout << max(res,mx2) << endl;
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
