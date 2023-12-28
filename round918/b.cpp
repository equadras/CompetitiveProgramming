#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    string l1, l2, l3; cin >> l1 >> l2 >> l3;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++){
        if (l1[i] == 'A') a++;
        if (l2[i] == 'A') a++;
        if (l3[i] == 'A') a++;

        if (l1[i] == 'B') b++;
        if (l2[i] == 'B') b++;
        if (l3[i] == 'B') b++;

        if (l1[i] == 'C') c++;
        if (l2[i] == 'C') c++;
        if (l3[i] == 'C') c++;
    }
    if (a == 2) cout << 'A' << endl;
    if (b == 2) cout << 'B' << endl;
    if (c == 2) cout << 'C' << endl;
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
