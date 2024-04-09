#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin>> n;
    char grid[2][n];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    /* pair<int,int> at = {0,0}; */


    for (int j = 0; j < n; j++){
        if ((grid[0][j] == '<' && grid[1][j-1] == '<') && j % 2 == 1 && j-1 > 0){
            cout << "NO" << endl;
            return;
        }
        else if(j+1 < n){
            if ((grid[0][j] == '<' && grid[1][j+1] == '<') && j % 2 == 1){
                cout << "NO" << endl;
                return;

            }
        }
    }
    cout << "YES" << endl;
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



