#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<char> s(n+2, 'W');
    for(int i = 1; i <= n; i++){
        cin >> s[i];
    }
    bool fB = false, fR = false;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'W'){
            if(fB != fR){
                cout << "NO\n";
                return;
            }
            fB = fR = false;
        } else if(s[i] == 'B'){
            fB = true;
        } else if(s[i] == 'R'){
            fR = true;
        }
    }

    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
}

