#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    string s; cin >> s;
    int tam = s.size();
    bool f = (s[0] == 'B' || s[tam - 1] == 'B');
    for(int i = 0; i < tam-1; i++){
        if (s[i] == s[i + 1] && s[i] == 'B') f = true;
    }

    vector<int> gps;
    int gp = 0;
    for(int i = 0; i < tam; i++){
        if(s[i] == 'A') gp++;
        else {
            if(gp != 0) gps.push_back(gp); 
            gp = 0;
        }
    }
    if (gp > 0) gps.push_back(gp);
	sort(gps.begin(), gps.end());

    int res = 0; 

    //assert(gps.size() != 0);AA
    if(gps.size() == 0){
        cout << 0 << endl;
        return;
    }

    if(f) res += gps[0];
    for(int i = 1; i < gps.size(); i++){
        res += gps[i]; 
    }
    cout << res << endl;
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
