#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

vector<int> dp;
vector<bool> usado;
vector<vector<int>> sl;

int get(int v){
    if(usado[v]){
        return dp[v];
    }
    usado[v] = true;
    int s = 0;

    for(int u: sl[v]){
        s += get(u);
    }

    if(!sl[v].empty()) dp[v] = min(dp[v], s);
    return dp[v];
}

void solve() {
    int n, k;
    cin >> n >> k;
    dp.resize(n);
    usado.assign(n, false);
    sl.assign(n, vector<int>(0));

    for(int &e: dp) cin >> e;
    for(int i = 0; i < k; ++i){
        int e;
        cin >> e;
        dp[--e] = 0;
    }

    for(int i = 0; i < n; ++i){
        int m;
        cin >> m;
        sl[i].resize(m);
        for(int &e: sl[i]){
            cin >> e;
            --e;
        }
    }
    for(int i = 0; i < n; ++i){
        get(i);
    }

    for(int ele: dp) cout << ele << " ";
    cout << endl;
}

bool multi = true;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 1;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}

