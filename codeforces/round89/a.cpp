#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    string s; cin >> s;
    string res = "";
    for (int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i') continue;
        else {
            res.push_back('.');
            res.push_back(tolower(s[i]));
        }
    }
    cout << res << endl;
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
