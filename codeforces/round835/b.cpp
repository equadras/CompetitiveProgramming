#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int l = 0;
    for(int i = 0; i < n; i++){
        if(s[i]-'a'+1 > l) l = s[i] - 'a' + 1; 
    }
    cout << l << "\n";
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
