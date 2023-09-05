#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n;
	string a[3][n];
    map<string, int> mp;

	for(int i = 0; i < 3; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];
			mp[a[i][j]]++;
		}
	}
	for(int i = 0; i < 3; i++){
        int tot = 0;
		for(int j = 0; j < n; j++){
			if (mp[a[i][j]] == 1){tot += 3;}
			else if (mp[a[i][j]] == 2){tot++;}
		}
		cout << tot << ' ';
	}
	cout << '\n';
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
