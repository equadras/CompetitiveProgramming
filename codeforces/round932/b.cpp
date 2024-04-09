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
    vector<int> f1(n + 1);
    vector<int> f2(n + 1);

    for (int i = 0; i < n; ++i){
        cin >> a[i];
        f2[a[i]]++;
    }

    int mex1 = 0, mex2 = 0;
    while (f2[mex2]) mex2++;

    for (int i = 0; i < n; ++i){
        f1[a[i]]++;
        if (--f2[a[i]] == 0 && mex2 > a[i]){
            mex2 = a[i];
        }
        while (mex2 && !f2[mex2 - 1]) mex2--;
        while (f1[mex1]) mex1++;

        if (mex1 == mex2){
            cout << "2" << endl;
            cout << 1 << " " << i + 1 << endl;
            cout << i + 2 << " " << n << endl;
            return;
        }
    }
    cout << "-1" << endl;

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


