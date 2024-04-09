#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

const int maxn = 1e5+5;

int freq [maxn];

void solve(){
    int n; cin >> n;

    /* for (int i = 0; i < n; i++) cout << freq[i]; */
    /* cout << endl; */
    for (int i = 0; i < n-1; i++){
        int u, v; cin >> u >> v;
        freq[u]++;
        freq[v]++;
    } 

    int res = 0;
    for (auto f:freq){
        if (f == 1) res++;
    }
    cout << (res+1)/2 << endl;
    for (int i = 0; i <= n; i++) freq[i] = 0;
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


