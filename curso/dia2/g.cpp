#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

int freq[14];

void solve(){
    string s; getline(cin, s);
    s.push_back(' '); 
    vector<int> cartas;
    string aux;

    for (auto i : s){
        if (i == ' '){
            freq[stol(aux)]++;
            aux.clear();
            continue;
        }
        aux.push_back(i); 
    } 
     
    for (int i = 1; i <= 13; i++){
        if (freq[i] > 0){
            if (i == 1) cout << "A" << ' ';
            else if (i == 11) cout << "J" << ' ';
            else if (i == 12) cout << "Q" << ' ';
            else if (i == 13) cout << "K" << ' ';
            else cout << i << ' ';
            
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0; if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
