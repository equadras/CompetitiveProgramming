#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int arr[3];
    int sum = 0;
    for(int i = 0; i < 3; i++){
        cin >> arr[i]; 
    }
    if(arr[0] + arr[1] >= 10 || arr[0] + arr[2] >= 10 || arr[2] + arr[1] >= 10) cout << "YES" << endl;
    else cout << "NO" << endl;
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
