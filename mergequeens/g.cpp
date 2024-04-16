#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const ll maxn = 1e6+5;
ll fib[maxn];

void calc(ll n){
    fib[0] = 1;
    for (int i = 1; i < n+1; i++){
        fib[i] = fib[i/2] + fib[i/3];
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll n; cin >> n;
    calc(n);

    cout << fib[n];


    return 0;
}


