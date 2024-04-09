#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int res = n - 1;

    for (int i = 1; i < n - 1; i++){
        if (s[i + 1] == s[i - 1]) res -= 1;
    }
    cout << res << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tc = 1;
    if(tc){
        cin >> tc;
        while(tc--) solve();
    } else solve();
    return 0;
}
