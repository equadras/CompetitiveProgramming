#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    string s; cin>>s;
    map<char,int> mp;
    for (auto ele:s) mp[ele]++;

    int mx = 0;
    for(auto ele:mp) mx = max(mx, ele.second);

    int f = -1;
    int val = n - mx;
    if (mx - (val) <=0){
        if (n % 2 != 0) f = 0;
        else f = 1;
    }

    if (f == 0) cout << 1 << endl;
    else if (f == 1) cout << 0 << endl;
    else cout<<mx-(val)<<endl;
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
