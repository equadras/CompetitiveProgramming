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
    string s; cin >> s;

    /* mp<char,int>mp; */
    /* int cnt = 0; */
    int cnt1, cnt2;
    int res = 0; bool f = false;
    for (int i = 1; i <= n; ++i){
        if (f) break;
        if (n % i == 0){
            cnt1 = 0, cnt2 = 0;
            for (int j = 0; j < n; ++j){
                char agr = s[j], pref = s[(j+i)%i];
                
                /* debug(s[j], s[j%i], s[(j+i)%i]); */

                if (agr != pref) cnt1++;
                /* if (s[] != s[j%i]) cnt1++; */
            }

            for (int j = 0; j < n; ++j){
                char agr = s[j], pref = s[(n-i+j%i)];
                /* if (s[j] != s[(n-i+j%i)]) cnt2++; */
                if (agr != pref) cnt2++;

            }
            if (cnt1 <= 1 || cnt2 <= 1){
                res = i+1;
                f = true;
            }
        }
    }
    cout << res-1 << endl;
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


