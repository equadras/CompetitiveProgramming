#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m; 
        vector<string> a(n);
        for (int i = 0; i < n; i++){
            string s; cin >> s; 
            a[i] = s; 
        }
        for (int j = 0; j < m; j++){
            for (int i = n-1; i >= 0; i--){
                if (a[i][j] == '*' && i < n-1){
                    int k = i; 
                    char b; 
                    while (k < n-1 && (b = a[++k][j]) == '.'){
                        char aux = a[k-1][j]; 
                        a[k-1][j] = a[k][j]; 
                        a[k][j] = aux;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << a[i][j]; 
            }
            cout << '\n'; 
        }

    }
}
