#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    vector<string> grid (3);
    for (int i = 0; i < 3; i++){
        cin >> grid[i];
    }

    for (int i = 0; i < 3; i++){
        if ((grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) && grid[i][0] != '.'){
            cout << grid[i][0] << endl;
            return;
        }
        if ((grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]) && grid[0][i] != '.'){
            cout << grid[0][i] << endl;
            return;
        }
    }

    if ((grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) && grid[0][0] != '.'){
        cout << grid[0][0] << endl;
        return;
    }
    if ((grid[2][0] == grid[1][1] && grid[1][1] == grid[0][2]) && grid[2][0] != '.'){
        cout << grid[2][0] << endl;
        return;
    }
    cout << "DRAW" << endl;
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
