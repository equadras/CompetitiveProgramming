#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;

    vector<int> a (n);
	for (auto& x : a) cin >> x;

	sort(a.begin(), a.end());

	if (a.back() == a[0]){
		cout << -1 << endl;
		return;
	}
	else {
		int y = 0;
		while (a[y] == a[0]) y++;
		cout << y << " " << n - y << endl;
		for (int j = 0; j < y; ++j) cout << a[j] << " ";

		for (int j = y; j < n; ++j) cout << a[j] << " ";
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
