#include <bits/stdc++.h> 
 

using namespace std;
 
#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif
#define int long long
#define endl '\n'
 
const int N = 1000 + 50;
const int INF = -1;
 
int dp[N][N];
int a[N], b[N];
int n, m;

int calc(int i, int j) {
	if (i == 0 || j == 0) return 0;

	if (dp[i][j] != INF) return dp[i][j];
	if (a[i-1] != b[j-1]) dp[i][j] = max({dp[i][j], calc(i - 1, j), calc(i, j - 1)});
	if (a[i - 1] == b[j - 1]){
        dp[i][j] = max(dp[i][j], calc(i - 1, j - 1) + 1);
    }

	return dp[i][j];
}

vector<int> resp1;
int vis[N][N];
void dfs(int i, int j, vector<int>& resp) {
    if (vis[i][j]) return;
    vis[i][j]++;
	if (i == 0 || j == 0) {
        if (resp.size() == dp[n][m] && resp1.size() == 0) {
            resp1 = resp;
        }
        return;
    }

	if (a[i-1] != b[j-1]) {
        dfs(i - 1, j, resp);
        dfs(i, j - 1, resp);
    }

    if (a[i - 1] == b[j - 1]) {
        resp.push_back(a[i - 1]);
        dfs(i - 1, j - 1, resp);
        resp.pop_back();
    }
    return;
}
 
void solve() {
	cin >> n >> m;
 
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];
 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) dp[i][j] = INF;
	}
 
	dp[0][0] = 0;
	calc(n, m);

	vector<int> resp;
    dfs(n, m, resp);

    reverse(resp1.begin(), resp1.end());

    cout << resp1.size() << endl;
    for (auto c: resp1) cout << c << " ";
    cout << endl;
}
 
signed main() {
	solve();
}



