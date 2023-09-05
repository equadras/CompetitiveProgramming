#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){

        vector<char> s(10);
        string cf = "codeforces";
        int cnt = 0; 

        for(int i = 0; i < 10; i++){
            cin >> s[i];
            if(s[i] != cf[i]) cnt++; 
        } 
        cout << cnt << "\n";
    }
}

