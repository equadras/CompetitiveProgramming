#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll a[2030][2030];
vector<ll> pref(2030*2030+5); 

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll cnt = 1, idx = 1;
    for(int i = 1; i <= 2023; i++){
        for(int j = 1; j <= i; j++){
            a[i][j] = cnt;
            pref[idx] = cnt*cnt + pref[idx-1];
            cnt++;
            idx++;
        }
    }
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll l, r, linha;
        for(int i = 1; i <= 2023; i++){
            if(a[i][1] + i-1 >= n){
                l = r = n - a[i][1] + 1; 
                linha = i;
                break;
            }
        }
        ll ans = 0; 
        /* cout << linha << "\n"; */
        while(linha > 0){
            /* cout << a[linha][r] << " " << a[linha][l] << "\n"; */
            ans += pref[a[linha][r]] - pref[a[linha][l]-1];
            if(a[linha-1][r] == 0) r--;
            linha--;
            if(l > 1) l--;
        }
        cout << ans << "\n";
    }
}

