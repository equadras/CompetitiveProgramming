#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    string s; cin >> s;
    int l = 0, r = s.size()-1;
    while (l <= r){
        if (s[l] != s[r]){
           cout << "não" << endl;
            return;
        } 
    l++;r--;
    }
    cout << "sim" << endl;
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
