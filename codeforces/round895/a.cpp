#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    int diff = abs(a-b);

    if(a == b) {
        cout << "0" << endl;
        return;
    }

    else{
        if (c == 1){
            if(diff%2 == 0){
                cout << diff/2 << endl;
                return;
            }
            else{ 
                cout << (diff/2)+1 << endl;
                return;
            }
        }

        int res = (diff/c)/2;
       //cout << diff << " " << res << " " << res+1 << endl;
        int mx = max(a,b);
        int mn = min(a,b);
        if(mx-c*res == mn+c*res){
            cout << res <<endl;
            return;
        }
        else { 
            res++;
            cout << res << endl;
        }
    }
      
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
