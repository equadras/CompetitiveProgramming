#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int a; cin >> a;
    vector<int> b(a);
    vector<int> c;
    int d = 0;
    int e = 1;
    int f = 0;
    for (int i = 0; i < a; i++){
        cin >> b[i];

        if (b[i] == 1) {
            if (f > 0 && d > 0) c.push_back(f);
            f = 0;
            d++;
        } else {
            f++;
        }
    }

    for (int i = 0; i < c.size(); i++) e *= c[i] + 1;

    if (d == 1) cout << 1 << endl;
    else if (d == 0) cout << 0 << endl;
    else cout << e << endl;

}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
