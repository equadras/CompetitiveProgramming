#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, a, n; cin >> d >> a >> n;
    int v;
    if(n <= 15){
        v = (31 + 1 - n) * (d +(a*(n-1)));
    } else {
        v = (31 + 1 - n) * ((14*a) + d); 
    }
    cout << v << "\n";
}
