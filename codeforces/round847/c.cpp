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
    int n; cin >> n;
    vector<vector<int>> seq(n, vector<int> (n-1));
    vector<int> cnt(n+1);
    vector<int> aux(n+1);


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++) 
            cin >> seq[i][j];
        aux[seq[i][0]] = i;

        cnt[seq[i][0]]++;
    }

    int comeco = -32;
    int x = 0;
    debug(cnt);
    for (int i = 1; i < n +1; i++){
        if (cnt[i]){
            if (cnt[i] == n - 1)  comeco = i;
            else  x = aux[i];
        }
    }
    cout << comeco << " ";
    for (int i = 0; i < n-1; i++){
        cout << seq[x][i] << " ";
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



