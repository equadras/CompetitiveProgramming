#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const int max = 1e5+5;
int vis[1010][1010];
char grid[1010][1010];
int n, m;

int cX[4] = {0, 0, 1, -1};
int cY[4] = {1, -1, 0, 0};

bool isValid (int y, int x){
    if (y < 0) return false;
    if (x < 0) return false;
    if (y >= n) return false;
    if (x >= m) return false;
    if (grid[y][x] == '#') return false;
    return true;
}

void dfs (int y, int x){
    vis[y][x] = true;
    for (int i = 0 ; i < 4 ; i++){
        int novoX = x + cX[i];
        int novoY = y + cY[i];
        if (isValid(novoY, novoX)){
            if (!vis[novoY][novoX]){
                dfs(novoY, novoX);
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    int res = 0;

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            cin >> grid[i][j];
        }
    }
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            if (grid[i][j] == '.' && !vis[i][j]){
                dfs(i, j);
                res++;
            }
        }
    }
    cout << res << endl;
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



