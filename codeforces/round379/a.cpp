#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    int cntA = 0, cntD = 0;
    for (int i = 0; i < n; i++){
        char c; cin >> c;
        if (c == 'A') cntA++;
        if (c == 'D') cntD++;
    }
    if (cntA > cntD) cout << "Anton" << endl;
    if (cntD > cntA) cout << "Danik" << endl;
    if (cntA == cntD) cout << "Friendship" << endl;
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
