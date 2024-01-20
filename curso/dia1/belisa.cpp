#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    string s, ss; getline(std::cin, s); getline(std::cin, ss);

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(ss.begin(), ss.end(), ss.begin(), ::tolower);

    sort(s.begin(),s.end());
    sort(ss.begin(),ss.end());


    if (s == ss) cout << "sim" << endl;
    else cout << "nao" << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
