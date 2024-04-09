#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    string s; cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++){
        if (s[i] != '+'){
            if (i != s.length() - 1){ 
                cout << s[i] << '+'; 
            }
            else cout << s[i];
       }
    }
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
