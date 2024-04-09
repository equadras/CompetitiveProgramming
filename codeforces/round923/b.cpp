#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        int x = find(v.begin(), v.end(), a[i]) - v.begin();
        v[x]++;
        cout << char('a' + x);
    }
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
