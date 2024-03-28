#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;


bool zeroum(int x){
    while (x > 0){
        int num = x % 10;
        if (num != 0 && num != 1) return false;
        x /= 10;
    }
    return true;
}

void solve(){
    int n; cin >> n;
    if (zeroum(n)){
        cout << "YES" << endl;
        return;
    }

    int cnt = 0;
    while (n > 1){
        vector<int> a;
        for (int i = 1; i * i<= n; i++){
            if (n % i == 0){
                if (n / i == i) a.push_back(i);
                else {
                    a.push_back(i);
                    a.push_back(n/i);
                }
            }
        }

        /* debug(a); */
        sort(a.begin(),a.end());
        a.erase(a.begin());
        /* debug(a); */
        reverse(a.begin(),a.end());

        cnt = 0;
        for (auto x: a){
            if (zeroum(x)){
                n /= x;
                cnt++;
                break;
            }
        }

        if (cnt == 0){
            cout << "NO" << endl;
            return;
        }

    }
    cout << (cnt != 0 ? "YES" : "NO") << endl;
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


