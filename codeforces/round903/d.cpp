#include <bits/stdc++.h>

using namespace std;
#define int long long

const int maxn = 1e4+5;
int a[maxn];
map<int,int> primos;

void fatora(int n, int x){
    for(int i = 2; i*i <= x; i++){
        while(x % i == 0){
            /* cout << "inseri no map o numero " << i << endl; */
            x /= i; 
            primos[i]++;
        } 
    }
    if(x != 1) primos[x]++;
}

void solve(){
    primos.clear();
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    bool f = false;
    for(int i = 1; i < n; i++){
        if(a[i] != a[i-1]) f = true;
    }
    if(!f){
        cout << "YES" << endl; 
        return;
    } 
    //fatorar e colocar no mapa de frequencia, verificar a frequencia = n
    
    for(int i = 0; i < n; i++){
        /* cout << "chamando fatora para o " << a[i] << endl; */
        fatora(n, a[i]); 
    }

    for(auto &par : primos) {
        if(par.second % n != 0){
            cout << "NO" << endl; 
            return;
        }
    }
    cout << "YES" << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int TC = 1;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}

