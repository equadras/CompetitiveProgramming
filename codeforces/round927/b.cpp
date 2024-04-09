#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    bool f = false;
    for (int i = 0; i < n; i++){ 
        cin >> a[i];
        if (a[i] != 1) f = true;
    }

    /* if (!f){cout << n << endl;return;} */

    int atual = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > atual){
            atual = a[i];
        } 
        else {
            int qt = (atual/a[i]) + 1;
            int mano = qt * a[i];

            if (mano > atual){
                atual = mano;
            }
        }
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
