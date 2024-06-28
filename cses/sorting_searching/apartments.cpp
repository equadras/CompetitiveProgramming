#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

void solve(){
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);

    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int i = 0, j = 0;
    int ans = 0;
	while (i < n && j < m){
		if (abs(a[i] - b[j]) <= k){
			i++;
			j++;
			ans++;
		} 
        
        else {
			if (a[i] - b[j] > k) j++;
			else i++;
		}
	}
	cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}



