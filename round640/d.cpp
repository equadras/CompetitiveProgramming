#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = n-1, j = 0;
    int aliceA= 0, bobA = 0;
    int aliceR = 0, bobR = 0;

    while (l <= r){
        if (j & 1){
            int x = 0;
            while (l <= r && x <= aliceA) x += a[r--];
            bobA = x;
            bobR += x;
        } else {
            int x = 0;
            while (l <= r && x <= bobA) x += a[l++];
            aliceA = x;
            aliceR += x;
             
        }
        j++;
    }
    cout << j << " " << aliceR << " " << bobR << endl;
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
