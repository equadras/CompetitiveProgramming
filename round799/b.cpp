#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
	int n, x; cin >> n;
	set<int> a;
	for(int i = 0; i < n; i++){
		cin >> x;
		a.insert(x);
	}

	if((n-a.size())%2 == 0) cout << a.size() << endl;
	else cout << a.size()-1 << endl;
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
