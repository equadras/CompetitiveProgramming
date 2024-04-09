#include <bits/stdc++.h>

    using namespace std;

#define endl "\n"
    typedef long long ll;

    void solve(){
        int n; cin >> n;
        int s = 1;
        while (n/2 > 0){
            s*=2;
            n/=2;
        }
        cout << s << endl;
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
