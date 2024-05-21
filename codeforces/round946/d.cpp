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
    int n;cin >> n;
    string s; cin >> s;
    string tt;
    pair<int,int> a,b; //coords deles;
    map<char, int> mp;
    bool f = 0;
    for (int i = 0; i < n; i++){
        if (!mp[s[i]] && !(i + 1 == n && !f)){
            tt += 'R';
            mp[s[i]]++;
            if (s[i] == 'W') a.first--;
            else if (s[i] == 'E') a.first++;
            else if (s[i] == 'N') a.second++;
            else a.second--;
        }
        else {
            f = 1;
            tt += 'H';
            mp[s[i]]--;
            if (s[i] == 'W') b.first--;
            else if (s[i] == 'E') b.first++;
            else if (s[i] == 'N') b.second++;
            else b.second--;
        }
    }
    if (a == b) cout << tt << endl;
    else {
        int nt, w, e, st;
        nt = e = st = w = 0;
        for (int i = 0; i < n; i++){
            nt += s[i] == 'N';
            st += s[i] == 'S';
            e += s[i] == 'E';
            w += s[i] == 'W';
        }
        if (st == nt && e == w){
            a = {0, 0}, b = {0, 0};
            tt = "";
            f = 0;
            bool g = 0;
            for (int i = 0; i < n; i++){
                if (s[i] == 'N' || s[i] == 'S'){
                    g = 1;
                    tt += 'R';
                    if (s[i] == 'W') a.first--;
                    else if (s[i] == 'E') a.first++;
                    else if (s[i] == 'N') a.second++;
                    else a.second--;
                }
                else{
                    f = 1;
                    tt += 'H';
                    if(s[i] == 'W') b.first--;
                    else if(s[i] == 'E') b.first++;
                    else if(s[i] == 'N') b.second++;
                    else b.second--;	
                }
            }
            if(a == b && f && g) cout << tt << endl;
            else cout << "NO" << endl;
            continue;
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



