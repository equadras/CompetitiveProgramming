#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, k; cin >> n >> k ;
    string s ;cin >> s;
    int cnt = 0 ;
    for (auto ch : s) if (ch == 'B') cnt++;
        if (cnt ==  k){
            cout << 0 << endl; 
            return;
        }
    if (cnt < k){
        cout << 1 << endl;
        for (int i = 0 ; i < n ; i++){
            if (s[i] == 'A') cnt++;
            if(cnt ==  k){
                cout << i + 1  <<" B" << endl;
                return;
            }
        }
    } else {
        cout << 1 << endl;
        for (int i = 0 ; i < n ; i++){
            if (s[i] == 'B') cnt--;

            if (cnt == k){
                cout << i + 1 <<" A" << endl;
                return;
            }
        }
    }

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
