#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

const int maxn = 55;

int fibo[maxn];

void calcula(){
    fibo[0] = fibo[1] = 1;
    for (int i = 2; i < maxn; ++i) fibo[i] = fibo[i - 2] + fibo[i - 1];
}

bool solve2(int n, int x, int y){
    if (n == 1) return true;

    int altura = fibo[n];
    int largura = fibo[n+1];

    
    if (y <= largura - altura || y > altura){
        int x2, y2 = x; 
        if (y <= largura - altura) x2 = y;
        else x2 = y - altura;
        return solve2(n-1, x2, y2);
    }
    return false; 
}
void solve(){
    int n, x, y; cin >> n >> x >> y;
    cout << (solve2(n, x, y) ? "YES" : "NO") << endl;
    /* if (solve2(n, x, y)) cout << "YES" << endl; */
    /* else cout << "NO" << endl; */
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 1;
    //precalcular os valores da sequencia
    calcula();
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}

