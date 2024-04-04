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
    int a, b, c; cin >> a >> b >> c;
    if (a+1 != c){
        cout << -1 << endl;
        return;
    }


    int res = 0;
    int nodo_agr = 1;
    int nodo = 1;

    int cnt = 0;
    while (true){
		if (!nodo_agr){
	        res++;
            /* debug(nodo_agr,nodo); */
            swap(nodo_agr,nodo);
	    }
	    nodo_agr--;
	    nodo++;
        if (cnt < a) nodo++;

        debug(nodo_agr,nodo);

        cnt++;
        if (cnt >= a+b) break;
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


