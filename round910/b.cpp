#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long


void solve(){
    int n; cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    int ult = a[n];
    int x = 0, k = 0;;

    for (int i = n; i >= 1; i--){
        if (a[i] > ult){
            if (a[i] >= ult * 2){
                x += (a[i] - ult) / ult;
                k = (a[i] - ult) / ult;

                if (a[i] % ult != 0){
                    x++;k++;
                }
                ult = min(a[i] / (k + 1), a[i] - a[i] / (k + 1) * k);
            } else {
                x++;
                ult = min(a[i] / 2, a[i] - a[i] / 2);
            }
        } else {
            ult = a[i];
        }
    }
    cout << x << endl;
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

