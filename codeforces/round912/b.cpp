#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n; cin >> n;

    int v[n][n];
    vector<int> res;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    if (n == 1){
        cout << "YES" << endl << 0 << endl;
        return;
    }

    for (int i = 0; i < n; i++){
        int x;
        if (i == 0) x = v[i][1];
        else x =v[i][0];

        for (int j = 0; j < n; j++){
            if (i != j){
                x = v[i][j] & x;
            }
        }
        res.push_back(x);
    }


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j) continue;

            int num = res[i] | res[j];
            if (num != v[i][j]){
                cout << "NO"  << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;
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

