#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long
void solve(){
    int n,k; cin >> n >> k;
 
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
 
    if(k==2){
        int ct = 0;
        for(int i = 0; i < n; i++)
            if(a[i] % 2 == 0) ct++;
        cout << 1 - min(1, ct) << endl;
    }else if(k == 3 || k ==5){
        int res = 0;
        for(int i = 0; i < n; i++){
            int tp = a[i] % k;
            if(!tp) tp = k;
            res = max(res, tp);
        }
        cout << k - res << endl;
    }else{
        int res = 0;
        for(int i = 0; i < n; i++){
            int tp = a[i] % k;
            if(!tp) tp = k;
            res = max(res,tp);
        }
        int ct = 0;
        for(int i = 0; i < n; i++)
            while(a[i] % 2 == 0){
                a[i] /= 2;
                ct++;
            }
        cout << min(k - res, 2 - min(2, ct)) << endl;
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
