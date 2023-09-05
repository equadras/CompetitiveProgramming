#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>v(n);
        int p = 0, im = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] % 2 ==0){
                p+=v[i];
            } else {
                im += v[i];
            }
        }
        if(p > im){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

