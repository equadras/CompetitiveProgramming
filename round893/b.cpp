#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

int a[200009];

void solve(){
    int t, n, m, d; cin >> n >> m >> d;
    int sum = 0;
    for (int i = 1; i <= m; i++){
        cin >> a[i];
        sum += (a[i] - a[i-1]-1) / d;
        sum++;
    }
    a[0] = 1;
    if (a[1] != 1) sum++;
    sum += (n-a[m]) / d;

    pair <int,int> ans = {1e18,0};
    a[m+1] = n+1;
    for (int i = 1; i <= m; i++){
        if(a[i]!=1) sum--;

        sum -= (a[i] - a[i-1]-1) / d;
        sum -= (a[i+1] - a[i]-1) / d;
        sum += (a[i+1] - a[i-1]-1) / d;

        if (ans.first > sum) 
            ans = {sum,1};
        else if (ans.first == sum) 
            ans.second++;
        if (a[i] != 1) sum++;

        sum += (a[i] - a[i-1]-1) / d;
        sum += (a[i+1] - a[i]-1) / d;
        sum -= (a[i+1] - a[i-1]-1) / d;
    }
    cout << ans.first << " " << ans.second << endl;
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
