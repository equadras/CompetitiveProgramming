#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n, m; cin >> n >> m;
    vector<ll> v(n);
    ll c = 0, soma = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        soma += v[i];
    }
    if(m > soma){
        ll rot = m / soma;
        c = rot * n;
        m = m % soma;
    }
    if(m == 0) cout << c << "\n"; 
    while(m > 0){
        for(int i = 0; i < n; i++){
            m -= v[i]; c++;
            if(m <= 0){
                cout << c << "\n";
                break;
            }
        }
    }
}
