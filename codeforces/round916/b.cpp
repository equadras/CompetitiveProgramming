#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, k; cin >> n >> k;
    vector <int> a;    
    for (int i =0 ; i < n; i++){
        a.push_back(n-i); 
    }
    int ind = 0; 
    while (k--){
        a.insert(a.begin()+ind,ind+1);
        a.pop_back();
        ind += 1;
    }
    for (auto ele: a){
        cout << ele << " "; 
    }
    cout << endl;
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
