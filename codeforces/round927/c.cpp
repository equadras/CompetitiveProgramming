#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    string s; cin >> s;

    int l = 0, r = n-1;

    vector<int> v;

    for (int i = 0; i < n; i++){
        if (s[i] == 'L') v.push_back(a[l++]);
        else v.push_back(a[r--]);
    }

    vector<int> res(n);

    int x = 1;
    for (int i = n-1; i >= 0; i--){
        x *= v[i];
        x %= m;
        res[i] = x;
    }
    for (auto ele:res) cout << ele << " ";
    cout << endl;
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
