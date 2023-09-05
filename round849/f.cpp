#include <bits/stdc++.h>

using namespace std;

int soma(int v){
    int soma = 0;
    while(v>0){
        int s = v % 10;
        soma +=s;
        v/=10;
    }
    return soma;
}
int main(){
    int t; cin >> t;

    while(t--){
        int n, q; cin >> n >> q;
        vector <int> v(n);
        set <int> set;

        for(int i = 0; i < n; i++){
            cin >> v[i];
            set.insert(i);
        }
        int aws = 0;
        while(q--){
            int op; cin >> op;
            if(op == 1){
                int l, r; cin >> l >> r;
                for(auto i = set.lower_bound(l-1);i != set.end() && *i <= r-1;){
                    v[*i] = soma(v[*i]);
                    if(v[*i] <= 9){
                        i = set.erase(i);
                    } else {
                        i++;
                    } 
                }
            }
            else {
                int x; cin >> x;
                x--;
                cout << v[x] << endl;
            }
        }
    }
}
