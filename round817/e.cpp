#include <bits/stdc++.h>

using namespace std;
//#define int long long

long long arr[1005][1005];
long long dp[1005][1005];

void solve(){
	long long n, q; cin >> n >> q;
	for(int i = 0; i <= 1001; i++){
		for(int j = 0; j <= 1001; j++){
			arr[i][j] = dp[i][j] = 0;
		}
	}

	for(int i = 0; i < n; i++){
		long long h, w;
		cin >> h >> w;
		arr[h][w]+=h*w;
	}


	dp[0][0] = arr[0][0];

	for (int i = 1; i < 1002; i++) dp[0][i] = dp[0][i - 1] + arr[0][i];
	for (int i = 1; i < 1002; i++) dp[i][0] = dp[i - 1][0] + arr[i][0];

	// as per the general formula
	for (int i = 1; i < 1002; i++){
		for (int j = 1; j < 1002; j++){
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + arr[i][j];
		}
	}

	for(int i = 0; i < q; i++){
		long long hs, ws, hb, wb;
		cin >> hs >> ws >> hb >> wb;
		cout << dp[hb-1][wb-1] - dp[hb-1][ws] - dp[hs][wb-1] + dp[hs][ws] << endl;
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
