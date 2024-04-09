#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    int m1,m2; m1 = m2 = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] > m2){
            if(v[i] >= m1){
                m2 = m1;
                m1 = v[i];
            }
            else{
                m2 = v[i]; 
            }
        }
    }
    /* cout << m1 << " " << m2 << "\n"; */
    for(int i = 0; i < n; i++){
        if(v[i] != m1) cout << v[i]-m1 << " ";
        if(v[i] == m1) cout << v[i] - m2 << " "; 
    }

    cout << "\n";
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
