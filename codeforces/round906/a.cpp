#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n; 
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0;i < n;i++){
        cin >> a[i]; 
        mp[a[i]]++;
    }
    sort(a.begin(), a.end());
    if(a[0] == a[n-1]){
        puts("YES");
        return;
    }

    if (mp.size() > 2){
        puts("NO");
        return;
    }

    if (abs(mp[a[0]] - mp[a[n-1]]) <= 1){
        puts("YES");
        return;
    }
    puts("NO");
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
