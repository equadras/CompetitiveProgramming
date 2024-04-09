#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int k; cin >> k;
    deque<int> res;
    bool f = false;

    while(!f){
        int x = k % 9; 
        if (x >= 4) x += 1;
        res.push_front(x);
        k /= 9; 
        if (k == 0) f = true;
    }
    for (auto ele:res) cout << ele;
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
