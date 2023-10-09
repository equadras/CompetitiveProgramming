#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int x = 0, y = 0;
    string s[8];
    for(int i = 0; i < 8; i++) cin >> s[i];
    for(int i = 1; i < 7; i++){
        int cnt = 0;
        int k;
        for(int j = 1 ; j < 7; j++){
            if(s[i][j] == '#'){
                cnt++;
                k = j;
            }

        }
        if(cnt == 1 && s[i - 1][k + 1] == '#' && s[i - 1][k - 1] == '#'){
            x = i, y = k; break;
        }
    }

    cout << x + 1 << " " << y + 1 << endl;
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
