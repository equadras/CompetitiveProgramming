#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n, s; cin >> n >> s;
    vector<int> arr(n);
    vector<int> pref(n+1);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        pref[i+1]+= arr[i]+pref[i];
    }

    int res = -1;
    int sum = 0;

    int l = 0, r = n;
    while(l <= r){
        sum = pref[r] - pref[l-1];
        if(sum > s) break;
        int dis = r - l + 1;
        if(sum == s && dis > res){
            res = dis;
        }
        l--;
    }

    if(res == -1) cout << res << endl;
    else cout << n-res << endl;
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
