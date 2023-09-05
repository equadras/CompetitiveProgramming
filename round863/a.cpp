#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; char d; cin >> n >> d;
        string v;
        cin >> v;
        bool flag;
        for (int i = 0; i < n; i++){
            if (d > v[i]){
                for (int j = 0; j < i; j++) cout << v[j];
                cout << d;
                for (int j = i; j < n; j++) cout << v[j];
                cout << '\n';
                flag = true;
                break;
            }
        }
        if(!flag){
            for (int j = 0; j < n; j++) cout << v[j];
            cout << "\n";
        }       
    }
}

