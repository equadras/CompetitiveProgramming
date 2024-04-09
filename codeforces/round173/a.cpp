#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        int sum = (s[0] == '+' || s[2] == '+' ? 1 : -1);
        x += sum;
    }
    cout << x << endl;
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
