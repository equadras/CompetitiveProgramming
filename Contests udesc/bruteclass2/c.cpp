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
    vector<int> a(n);

    for (int &i : a) cin >> i;
    set<int> st;

    for (int i = n - 1; i >= 0; i--){
      if (st.find(a[i]) != st.end()){
          cout << n - st.size() << endl;
          return;
      }
      st.insert(a[i]);
    }

    cout << 0 << endl;
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



