#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> s(n);
    vector<int> e(n);
    for(int i = 0;i < n; i++){
        cin >> s[i];
        cin >> e[i];
    }
    int w = s[0]; 
    
    for(int i = 1;i < n; i++){
        //cout << "comparando força do " << i+1 << " que e " << s[i] << " e deve ser maior que o peso " << w << endl;
        if(s[i] < w) continue;
        else {
            if(e[i] >= e[0]){
                cout << "-1" << endl;
                return;
            } 
        }
    }
    cout << w << endl;
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
