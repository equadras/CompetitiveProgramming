#include <bits/stdc++.h>

using namespace std;

#define endl '\n' 
//#define int long long

// ----------    GRIND MENTALITY    ---------     
// /* ESCREVE TODAS AS SUAS IDEIAS E TESTA */
// ----------    GRIND MENTALITY    ---------     

void solve () {
    string s; cin >> s;
    vector<int> v(26);
    string resp;
    for (int i=0; i < s.size();){
        int k = 0;
        char c = s[i];
        resp += c;
        while (i < s.size() && s[i] == c) {
            k++;
            i++;
        }
        if (k > 1) resp += to_string(k);
    }
    
    if (resp.size() > s.size()) cout << s << endl;
    else cout << resp << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if (TC){
        cin >> TC;
        while (TC--) solve();
    } else {
        solve();
    }
    return 0;
}
