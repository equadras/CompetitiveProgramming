#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    string res = "";
    for (int i = n-1; i >= 0; i--){
        /* cout << s[i] << "      atual" << endl;; */
        if (s[i] != 'a' && s[i] != 'e'){
            if (i - 2 < 0){
                res += s[i]; res += s[i-1]; res+= '.';
                /* cout << res << endl; */
                break;
            }
            char df = s[i-2];
            if (df != 'a' && df != 'e'){
                res += s[i]; res += s[i-1]; res += s[i-2]; res+= '.';
                /* cout << res << endl; */
                i -= 2;
            }
        } else {
            res += s[i]; res += s[i-1]; res+= '.';
            i -= 1;
        }
    }
    reverse(res.begin(), res.end());
    res.erase(0, 1);
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
