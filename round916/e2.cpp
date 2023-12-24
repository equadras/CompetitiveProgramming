#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> a(n+1);      
    vector<int> b(n+1);      
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    vector<int> mix(n+1);      

    for (int i = 1; i <= n; i++){
        mix[i] = a[i] + b[i]; 
    }
    sort(mix.rbegin(), mix.rend());
    //alice = odd, bob = even
    int alice = 0, bob = 0;
    for (int i = 1; i <= n; i++){
        if (i % 2) alice += mix[i];
        else bob += mix[i];
    }
    cout << max(alice, bob) << endl;
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
