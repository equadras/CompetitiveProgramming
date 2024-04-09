#include <bits/stdc++.h>

using namespace std;
#define endl "\n"

#define int long long
int maxn = 2e5 + 5;
void solve(){
    int n, l , r; cin >> n >> l >> r;
    int a[maxn];
    int count = 0;
    for (int i = 0; i < n;i++) cin>>a[i];
    for (int i = 0; i < n; i++){
        if (a[i] < l){
            a[i]=l;
        }
        if (r < a[i]){
            a[i]=r;
        }
        cout << a[i];
        if (i != n-1){
            cout << " ";
        }
    }

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
