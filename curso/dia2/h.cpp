#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    vector<string> naipe = {"Paus", "Ouro", "Coração", "Espada"};
    vector<string> carta = {"Às", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Valete", "Dama", "Rei"};

    int n, c; cin >> n >> c;
    cout << carta[c - 1]  << " de " << naipe[n]<< endl;
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
