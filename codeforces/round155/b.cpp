#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n; cin >> n;
    vector<int> col (n);
    vector<int> row (n);
    for(int i = 0;i < n;i++) cin >> row[i];
    for(int i = 0;i < n;i++) cin >> col[i];
    int res_row = 0, res_col = 0;
    int min_row = *min_element(row.begin(),row.end());
    int min_col = *min_element(col.begin(),col.end());
    for(int i = 0;i < n;i++){
        res_row +=  col[i] + min_row;
    }
    for(int i = 0;i < n;i++){
        res_col +=  row[i] + min_col;
    }
    cout << min(res_row, res_col) << endl;
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
