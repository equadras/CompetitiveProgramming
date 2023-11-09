#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long
/*
   SE a[0] < k deu ruim
   SE a[0] == a[n-1] da p faze
   SO precisa só ter k de uma cor?
   */

void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (a[0] == a[n-1]){
        int cnt = 0;
        for (int k = 0; k < n; k++){
            if (a[k] == a[0]){
                cnt++;
            }
        }
        if (cnt >= k) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else {
        int x = k, y = k;
        for (int i = 0; i < n; i++){
            if (x > 0){
                if (a[i] == a[0]){
                    x--;
                }
            } 
            else if (y > 0){
                if (a[i] == a[n-1]){
                    y--;
                }
            }
        }

        if (x == 0 && y == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
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
