#include <bits/stdc++.h>

using namespace std;
//#define int long long

char arr[22][22];
void solve(){

    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int v=0, ii = 0, k = 0, a = 0;
    for(int i = 0; i < m;i++){
        for(int j = 0; j < n; j++){
            if(arr[j][i] == 'v' && v == 0) {
                v = 1;
                i++;
                j = -1;
            }
            if(arr[j][i] == 'i' && ii == 0) {
                if( v == 1){
                    ii = 1;
                    i++;
                    j = -1;
                }
            }
            if(arr[j][i] == 'k' && k == 0) {
                if( ii == 1){ k = 1;
                    i++;
                    j = -1;
                }
 
            }
            if(arr[j][i] == 'a' && a == 0) {
                if( k == 1){
                    a = 1;
                    break;
                }
            }
        }
        if(a == 1) break;
    }
    if(v == 1 && ii == 1 && k == 1 && a == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
 
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
