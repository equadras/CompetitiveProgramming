#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    int res = 0;
    int x = 0;

    while(x < n) {
        int j = x;
        while(j < n && s[j] == s[x]) j ++;
        res += j - x - 1;
        x = j;
    }
    cout << res;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
