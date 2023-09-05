#include <bits/stdc++.h> 

using namespace std; 

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n; 
        int a, b; 
        cin >> a >> b; 
        int flag = 0; 
        for (int i = 3; i <= n; i++){
            int x; cin >> x; 
            if (i % 2 == 0){
                if (!(x % 2 == b % 2)){
                    flag = 1; 
                }
            }
            else{
                if (!(x % 2 == a % 2)){
                    flag = 1; 
                }
            }
        }
        if(!flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
