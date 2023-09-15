#include <bits/stdc++.h>
 
using namespace std;
 
typedef unsigned long long ll;
//#define int long long

void solve(){
    int l, r;
    cin >> l >> r;
    int n1,n2 ,f = 0;
    for (int i = l = max(l,3); i <= r; i++){
        if(f) break;
        for (int j = 2; j <= sqrt(i); j++){
            if ((i - j) % j == 0){
                n1 = j;n2 = i-j;
                f = true;
            }
            
        //cout << "i = " << i << " j = " << j << endl;
        }
    }
    if(f)  cout << n1 << " " << n2 << endl;
    else cout << -1 << endl;
    
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
