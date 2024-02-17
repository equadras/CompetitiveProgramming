#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

const int maxn = 2e5 + 5;
void solve(){
    int n; cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    int x1 = maxn,x2 = maxn, res = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] > x1 && a[i] > x2){
            if (x1 < x2) x1 = a[i];
            else x2 = a[i];
            res++;
        }
        else if (a[i] <= x1 && a[i] <= x2){
            if (x1 < x2) x1=a[i];
            else x2 = a[i];
        }
        else {
            if (x1 >= a[i] && x2 < a[i]) x1 = a[i];
            else x2 = a[i];
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
