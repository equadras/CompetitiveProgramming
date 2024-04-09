#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    string s; cin >> s;
    if (s == "()"){
        cout << "NO" << endl;
        return;
    }
    int flag = true;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == s[i-1]) flag = false; 
    } 
    
    if (flag){
        cout << "YES" << endl;
        string a (s.size(), '(');
        string b (s.size(), ')');
        cout << a + b << endl; 
    }
    else {
        cout << "YES" << endl;
        for (int i = 0; i < s.size(); i++){
            cout << "()"; 
        } 
        cout << endl;
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
