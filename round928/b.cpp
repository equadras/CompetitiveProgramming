#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;


void solve(){
    int n; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> v;
    for (int i = 0; i < n; i++){
        if (count(a[i].begin(),a[i].end(),'1') != 0 ) v.push_back(count(a[i].begin(),a[i].end(),'1'));
    }
    if (v[0] != v[1]) cout << "TRIANGLE" << endl;
    else cout << "SQUARE" << endl;
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


