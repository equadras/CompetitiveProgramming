#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> a;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        if(i && a.back() > x){
            a.push_back(1);
        }
        a.push_back(x);
    }
    cout << a.size() << endl;
    for (int ele : a)
        cout << ele << " ";

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
