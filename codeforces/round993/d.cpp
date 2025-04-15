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
    int n; cin >> n;
    vector<int> st(n+1);
    queue<int> q;

    vector<int> res(n);

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (st[x] == 0){

            st[x] += 1;
            res[i] = x;
        }
    }
    //debug(st,res);

    for (int i = 0; i < n; i++) if (st[i+1] == 0) q.push(i+1);
    debug(q,res);

    for (int i = 0; i < n; i++){
        if (res[i] == 0){
            res[i] = q.front();
            q.pop();
        }
    }
    for (int i : res) cout << i << " ";
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



