#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,mw; cin >> n >> mw;
    vector<long long> v(n);
    vector<long long> w(n);
    for(int i = 0; i < n; i++) cin >> w[i]>> v[i];

    vector<vector<long long>> dp(n+1, vector<long long>(mw+1));
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= mw; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            } 
            else if(w[i-1] > j){
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i-1]] + v[i-1]);
            }
        }
    }

    cout << dp[n][mw] << endl;
    return 0;
}
