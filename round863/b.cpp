#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
	n /= 2;
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if(x1 > n) x1 = n * 2 + 1 - x1;
	if(y1 > n) y1 = n * 2 + 1 - y1;
	if(x2 > n) x2 = n * 2 + 1 - x2;
	if(y2 > n) y2 = n * 2 + 1 - y2;
	// cout << x1 << " " << x2 << " " << y1 << " " << y2 << endl;
	cout << abs(min(x1, y1)-min(x2, y2)) << endl;
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
