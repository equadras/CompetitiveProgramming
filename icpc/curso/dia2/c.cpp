#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (x & 1) odd.push_back(x);
        else even.push_back(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    for (auto e : odd) cout << e << " ";
    for (auto e : even) cout << e << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
