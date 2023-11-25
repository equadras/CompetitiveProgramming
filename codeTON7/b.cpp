#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int cnt;
    s[n-1] == 'B' ?  cnt = 1 : cnt = 0;
    int res = 0;
    for (int i = n-2; i >= 0; i--){
        // se for letra B soma 
        if (s[i] == 'B') cnt++;
        // se for a eu coloco na res ate o ultimo que era A
        if (s[i] == 'A'){
            res += cnt;
            cnt = 1;
        }
    }
    cout << res << endl;
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
