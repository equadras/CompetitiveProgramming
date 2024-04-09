#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int res = 0;
    bool f = false;
    for (int i = 0; i < n; i++){
        if (s[i] == '*' && s[i+1] == '*') break;
        else if (s[i] == '@') res ++;
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
