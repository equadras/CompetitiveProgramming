#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    string s; cin >> s;

    int k = 0;
    for (auto c : s){
        if (c == '4' || c == '7') k++;
    }
	if (k == 4 || k == 7) cout << "YES" << endl; 
    else cout << "NO" << endl;
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
