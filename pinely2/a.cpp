#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, a, q; cin >> n >> a >> q;
    string s; cin >> s;

    int on = a;
    bool todos = false; 
    if(a == n) todos = true;
    for(int i = 0; i < q; i++){
        if(s[i] == '+'){
            on++; 
        }
    } 
    int agr = a;
    for(int i = 0; i < q; i++){
        if(s[i] == '+') agr++;
        else agr--; 
        if(agr == n) todos = true;
    } 
    
    if(todos){
        cout << "YES" << endl;
        return;
    }
    if(on >= n){
        cout << "MAYBE" << endl;
        return;
    }
    cout << "NO" << endl;
    
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
