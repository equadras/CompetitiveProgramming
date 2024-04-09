#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;


const ll maxn = 2e5+5;
ll a[maxn];

ll calc(ll n){
    ll s = 0;
    while (n != 0){
        s += + n % 10;
        n /= 10;
    }
    return s;
}

void solve(){
    int n; cin >> n;
    cout << a[n] << endl;
}

signed main(){
    for (int i = 1; i < maxn; i++){
        a[i] += a[i-1] + calc(i);
    }

    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 1;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}


