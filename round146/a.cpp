#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    string s; cin>>s;
    set<char> st;
    for (int i = 0;i < s.length();++i) st.insert(s[i]);
    if (1 - st.size() &1) puts("CHAT WITH HER!");
    else puts("IGNORE HIM!");
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
