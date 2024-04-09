#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}

void solve(){
    string s; cin >> s;
    for(int i = 0;i < s.size()-1;i++){
        string ans = "";
        string a = s.substr(i,1);
        for(int j = i + 1; j < s.size();j++){
            string b = s.substr(j, 1);
            ans=(a + b);
            int num = stoi(ans);
            if(isPrime(num)){
                cout << num << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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
