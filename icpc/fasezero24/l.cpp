#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;


signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<string> o(n);
    map<string,int> mp;
    map<int, string> mp2;

    vector<bool> f(n, 1);

    for (int i = 0 ; i < n; i++) cin >> o[i];

    for (int i = 0 ; i < n; i++){
        string s; cin >> s;
        mp[s] = i;
        mp2[i] = s;
    }


    /* debug(mp); */
    int cnt = 0;
    for (int i = 0 ; i < n; i++){
        int pos = mp[o[i]];

        if (i == n-1){
            if (f[mp[mp2[cnt]]]) cout << mp2[cnt];
            else {
                while (f[mp[mp2[cnt]]] == 0) cnt++;
                cout << mp2[cnt];
            }

        }

        else {
            if (f[mp[mp2[cnt]]]) cout << mp2[cnt] << " ";
            else {
                while (f[mp[mp2[cnt]]] == 0) cnt++;
                cout << mp2[cnt] << " ";
            }
        }

        f[pos] = 0;
    }

    cout << endl;
    return 0;
}




