#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int l = 0, r = n -1;
        bool flag = false;
        while(!(l > r)) {
            if(s[l] == s[r] || n == 0){
                cout << n << endl;
                flag = true;
                break;
            }else{
                r--;l++; n-=2;
            }
        }
        if (!flag){
            cout << n << endl;
        }
    }
}
