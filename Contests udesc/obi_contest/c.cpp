#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int x, y;
    int m;
    vector <vector<int>> v (n,vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
            if(v[i][j] == 0){
                x = i;
                y = j;
            }
        }
    }
    int x2 = 1;
    if(x == 1) x2 = 2;

    int sl1 = 0,sl2 = 0, valor;

    for(int i = 0; i < n; i++){
        sl1 += v[x2][i];
        sl2 += v[x][i];
    }

    x++;
    y++;
    valor = sl1 - sl2;
    cout << valor << "\n" << x << "\n" << y << "\n";
}
