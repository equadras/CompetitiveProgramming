#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int r = 0;
        int n, c; cin >> n >> c;
        vector <int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            
            a[i]= i + 1 + a[i];
            /* cout << "a[i] + i = " << a[i] << "\n"; */
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if(c >= a[i]){
                r++;
                /* cout << "o preco e " << a[i] << " e tenho " << c << "\n"; */
                c -= a[i];
            }
        }
        cout << r << "\n";
    }
}
