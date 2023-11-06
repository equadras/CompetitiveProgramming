#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, d; cin >> n >> d;
    string s; cin >> s;
    for (int i = 0; i < n; ++i){
        if (s[i] - '0' >= d){
            cout << s[i];
        } 
        else {
            cout << d;
            for (int j = i; j < n; ++j){
                cout << s[j];
            }
            cout << endl;
            return;
        }
    }
    cout << d << endl;
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
