#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;


void solve(){
    string s; cin >> s;
    int a = 0, b = 0;
    for (auto c : s){
        if (c == 'A') a++;
        else b++;
    }
    cout << (a > b ? "A" : "B") << endl;
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


