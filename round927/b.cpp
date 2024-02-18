#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> a(n+1);
    bool f = false;
    for (int i = 1; i <= n; i++){ 
        cin >> a[i];
        if (a[i] != 1) f = true;
    }

    /* if (!f){cout << n << endl;return;} */

    int atual = a[1];
    for (int i = 2; i <= n; i++){
        int j = 1;

        /* cout << atual << "  " << a[i] << endl; */

        if (atual >= a[i]){
            while (a[i] * j <= atual) j++;
        }
        atual = a[i]*j;
    }

    cout << atual << endl;
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
