#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    int first = 0, second = 0;
    int mid = 0;
    for(int i = 1; i <= n; i++){
        int v; cin >> v;
        if (v == i && v == (n+1-i)) continue;
        else if (v == i) first++;
        else if (v == (n+1-i)) second++;
        else mid++;
    }
    int x = 0;
    for (int i = 0; i < 5*n ; i++){
        if (i%2 == 0){
            if (mid == 0 && second == 0){
                x = 1;
                break;
            }
            if (second > 0) second--;
            else if (mid > 1) mid--;
            else if (mid <= first) mid--;
        } else {
            if (mid == 0 && first==0){
                x = -1;
                break;
            }
            if (first > 0) first--;
            else if (mid > 1) mid--;
            else if (mid <= second) mid--;
        }
    }
    if (x > 0) cout << "First" << endl;
    else if(x < 0) cout << "Second" << endl;
    else cout << "Tie" << endl;
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


