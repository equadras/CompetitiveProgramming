#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;



void solve(){
    int querie; cin >> querie;
    deque<int> dq, rdq;


    ll ans = 0, rans = 0, sz = 0, tot = 0;

    while(querie--){
        int s; cin >> s;
        if (s == 1){
            int x = dq.back();
            dq.pop_back();
            dq.push_front(x);

            ans += tot;
            ans -= x*sz;

            x = rdq.front();
            rdq.pop_front();
            rdq.push_back(x);
            rans += x * sz;
            rans -= tot;
        }
        
        if (s == 2){
            swap(dq, rdq);
            swap(ans, rans);
        }

        if (s == 3){
            int x; cin >> x;
            sz++;  
            dq.push_back(x);
            rdq.push_front(x);
            ans += x*sz; 
            rans += tot;
            rans += x;
            tot += x;
        }
        cout << ans << endl;
    }
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




