#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    string s1 = "#";
    string s2 = ".";

    string l1, l2;
    int cnt = 0;
    bool f = false;

    for (int i = 0; i < 2*n; i++){
        if (f){
            l1 += s2;
            cnt++;
            if (cnt >= 2){
                cnt = 0;
                f = false;
            }
        }
        else if (!f){
            l1 += s1;
            cnt++;
            if (cnt >= 2){
                cnt = 0;
                f = true;
            }
        }
    }

    if (n%2 == 0){
        if (f) f = false;
        else f = true;
    }
    cnt = 0;

    for (int i = 0; i < 2*n; i++){
        if (f){
            l2 += s2;
            cnt++;
            if (cnt >= 2){
                cnt = 0;
                f = false;
            }
        }
        else if (!f){
            l2 += s1;
            cnt++;
            if (cnt >= 2){
                cnt = 0;
                f = true;
            }
        }
    }

    cnt = 0;
    f = false;
    for (int i = 0; i < 2*n; i++){
        if (f){
            cout << l2;
            cnt++;
            if (cnt >= 2){
                cnt = 0;
                f = false;
            }
        }
        else if (!f){
            cout << l1;
            cnt++;
            if (cnt >= 2){
                cnt = 0;
                f = true;
            }
        }

        cout << endl;
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


