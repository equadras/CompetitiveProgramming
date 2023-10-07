#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int maior = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int atual = 0;
            int k = i, l = j;
            while(k >= 0 && k < n && l >= 0 && l < m){
                atual += a[k][l];
                k--;
                l--;
            }
            k = i, l = j;
            while(k >= 0 && k < n && l >= 0 && l < m){
                atual += a[k][l];
                k++;
                l--;
            }
            k = i, l = j;
            while(k >= 0 && k < n && l >= 0 && l < m){
                atual += a[k][l];
                k--;
                l++;
            }
            k = i, l = j;
            while(k >= 0 && k < n && l >= 0 && l < m){
                atual += a[k][l];
                k++;
                l++;
            }
            atual -= a[i][j] * 3;
            maior = max(maior, atual);
        }
    }
    cout << maior << endl;

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

