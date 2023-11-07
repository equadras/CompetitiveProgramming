#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    int temp, temp2, c1 = 0, c2 = 0, flag = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == s[i + 1] && (s[i] == t[0] || s[i + 1] == t[m - 1])){
            flag = 1;
            break;
        }
        if (s[i] == s[i + 1]){
            flag = 2;
        }
    }
    if (flag == 2){
        for (int i = 0; i < m; i++){
            if (t[i] == t[i + 1]){
                flag = 1;
                break;
            }
        }
    }
    if (flag != 1){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

signed main(){
    //ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 1;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
