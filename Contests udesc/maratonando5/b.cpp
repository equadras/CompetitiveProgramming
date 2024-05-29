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
    int n = (int) s.size();
    vector<int> a, b;
    vector<bool> dis(n, 0);
    for (int i = 0; i < n; i++){
        if (s[i] == 'B'){
            if (!a.size()) continue;
            else {
                dis[a.back()] = 1;
                a.pop_back();
            }
            continue;
        } 
        else if (s[i] == 'b'){
            if (!b.size()) continue;
            else {
                dis[b.back()] = 1;
                b.pop_back();
            }
            continue;
        }

        if (s[i] >= 'A' && s[i] <= 'Z'){
            a.push_back(i);
        } else if (s[i] >= 'a' && s[i] <= 'z'){
            b.push_back(i);
        }
    }

    for (int i = 0; i < n; i++){
        if (s[i] != 'B' && s[i] != 'b' && !dis[i]){
            cout << s[i];
        }
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



