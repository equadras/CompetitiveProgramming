#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, d; cin >> n >> d;
    string s; cin >> s;
    bool ok = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] - '0' < d){
            s.insert(i, 1, char(d + '0'));
            ok = 1;
            break;
        }
    }
    if (!ok){
        s.push_back(char(d + '0'));
    }
    cout << s << endl;
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
