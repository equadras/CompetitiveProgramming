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

    int res = 0;

    for (int i = 0; i < n;i++){
        /* debug(s[i]); */
		if (i+4 < n && (s[i] == 'm' && (s[i+1] == 'a' && (s[i+2]=='p'&& (s[i+3] == 'i' && s[i+4] == 'e'))))){
			i += 4;
			res++;
		}
        else if (i+2 < n && (s[i] == 'm' && (s[i+1] == 'a' && s[i+2] == 'p'))){
			i += 2;
			res++;
		}
        else if (i+2 < n && (s[i] == 'p' && (s[i+1] == 'i' && s[i+2] == 'e'))){
			i += 2;
			res++;
		}
	}
	cout << res << endl;
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

