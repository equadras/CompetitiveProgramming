#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int x;
    cin >> x;
    string str;
    cin  >> str;
    map<char,int>mp;

    int cnt = 0;
    for(int i = 0 ;i < x; i ++){
        mp[str[i]]++;
        if(mp[str[i]] == 1)cnt+=2;
        else cnt++;
    }
    cout << cnt << endl;
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
