#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve(){
    int n, k, t, m;
    //vector<int> a(4);
    int a[4];
    int ans=0, ma=0;
    for(int i = 0; i < 3; i++) cin >> a[i];
	t = gcd(a[0], a[1]);
	t = gcd(t, a[2]);

    for(int i = 0; i < 3; i++){
        a[i] /= t;
    }
	//sort(a.begin(),a.end());
    sort(a,a+3);

	if(a[0] == 1){
		if(a[2] + a[1] > 5) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	else cout << "NO" << endl;
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
