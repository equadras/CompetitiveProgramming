#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

set<ll> divF (ll y, set<ll> &divs){
    for (ll i = 2; i * i <= y; i++){
        if (y % i == 0){
            divs.emplace(i);
            divs.emplace(y/i);
        }
    }
    return divs;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll y, k; cin >> y >> k;

    set<ll> divs;
    divF(y, divs);
    divs.emplace(y);
    /* debug(divs); */

    ll xi = 1;
    ll tam_passo = 1;

    while (k > 0){

       if (divs.upper_bound(xi) == divs.end()){
            xi += k * y;
            break;
       }


       auto div_prox = *divs.upper_bound(xi);

        ll dist = div_prox - xi;
        ll qt_passos = dist / tam_passo;


        if (tam_passo > dist){
            k--; 
            xi += tam_passo;
            if (k == 0){
                cout << xi << endl;
                return 0;
            }
        }

        if (dist % tam_passo == 0){// cai exatamente em cima do prox divisor
            if (k < qt_passos){ xi += k * tam_passo; break; }
            xi += qt_passos * tam_passo;
            tam_passo = div_prox;
            k -= qt_passos;
        }
        else { // cai antes do prox divisor
            if (k < qt_passos){ xi += k * tam_passo; break; }
            xi += qt_passos * tam_passo;
            k -= qt_passos;
        }

    }
    cout << xi << endl;
    return 0;
}

