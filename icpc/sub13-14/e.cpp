#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

const int maxn = 1e4+5;
int a [maxn];

void solve(){
    int n, r; cin >> n >> r;

    for (int i = 1; i <= r; i++){
        int x; cin >> x;
        a[x]++;
    }

    if (n == r){
        cout << "*" << endl;
        return;
    }

    for (int i = 1; i <= n; i++){
        if (a[i] == 0) cout << i << " ";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    solve();
    return 0;
}


