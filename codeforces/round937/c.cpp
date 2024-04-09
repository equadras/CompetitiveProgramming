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
    string s; cin >> s;
    string shrs = s.substr(0, 2);
    string smin = s.substr(3, 5);
    int h = stoi(shrs);
    int m = stoi(smin);

    if (h == 12 && m == 0){
        cout << "12:00 PM" << endl;
        return;
    }
    if (h == 0 && m == 0){
        cout << "12:00 AM" << endl;
        return;
    }

    if (h < 12){
        if (h == 0){
            cout << 12 << ":" << smin << " AM" << endl;
            return;
        }
        cout << s << " AM" << endl;
    }
    else {
        if (h == 12){
            cout << s << " PM" << endl;
            return;

        }
        if (h-12 < 10) cout << 0;
        cout << h-12 << ":" << smin << " PM" << endl;
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


