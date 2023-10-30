#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long


void solve(){
    string s; cin>>s;
    vector<string> res;
    for(int i = 0;i < s.size();i++){
        if(s[i] != '0'){
            string t="";
            t+=s[i];
            for(int j = i + 1;j < s.size();j++) t+='0';
            res.push_back(t);
        }
    }
    cout << res.size() << endl;
    for(auto ele : res)cout << ele << " ";
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
