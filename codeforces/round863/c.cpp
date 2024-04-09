#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

const int maxn = 50;

int fibo[maxn];

void calcula(){
    fibo[0] = fibo[1] = 1;
    for (int i = 2; i < maxn; ++i) fibo[i] = fibo[i - 2] + fibo[i - 1];
}

bool solve2(int n, int x, int y){
    if (n == 1) return true;

    if (min(y, fibo[n+1] - y+1) > fibo[n+1] - fibo[n]){
        return false;
    }
    y = min(y, fibo[n+1] - y+1);
    return solve2(y,x,n-1);
}
void solve(){
    int n, x, y; cin >> n >> x >> y;
    if (solve2(n, x, y)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
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
