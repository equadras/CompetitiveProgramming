#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

const int maxn = 1e6+5;

vector<int> e[maxn];
int tp[maxn];
int c[maxn];
int res[maxn];

void dfs (int k, int a){
    /* cout << "[k, a] = " << k << ", " << a << endl; */
    c[tp[k]]++;
    /* cout << "c[tp[k]] = " <<  c[tp[k]]  << endl; */

    a += (c[tp[k]] == 1);
    res[k] = a;

    for (auto i : e[k]) dfs(i,a);
    c[tp[k]]--;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, root; cin >> n; 
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if (x != 0) e[x].push_back(i);
        else root = i;
    }
    for (int i = 1; i <= n; i++) cin >> tp[i];
    dfs(root, 0);

    for (int i = 1; i <= n; i++) cout << res[i] << " ";
    cout << endl;
    return 0;
}
