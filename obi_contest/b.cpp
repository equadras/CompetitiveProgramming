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
    int n, m ,s; cin >> n >> m >> s;
    int r = -1;
    for(int i = n; i <= m; i++ ){
        /* cout << "i = " << i << "\nn = " << n << "\nn+(n-i) == " << n+(n-i) << "\n"; */
        if(soma(i) == s){
            r = i; 
        }
    }
    cout << r << "\n";
}
