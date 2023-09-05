#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int i1,j1, i2, j2; cin >> i1 >> j1 >> i2 >> j2;
        i1--;j1--;i2--;j2--;
        int dx, dy;
        string d; cin >> d;
        
        if(d[0]== 'D'){
            dx = 1;
        } else {
            dx = -1;
        }
        if(d[1] == 'R'){
            dy = 1;
        } else {
            dy = -1;
        }
        int bounces = 0;
        bool flag = false;

        
        for(int i = 0; i <= n*m*4; i++){
            if(i1 == i2 && j1 == j2){
                flag = true;
                cerr << "entrou!" << endl;
                break;
            }
            bool bouncou = false;
            if(i1 == n -1 && dx == 1 || i1 == 0 && dx == -1){
                dx = dx*-1;
                bouncou = true;
                /* me matta pfv :<( */
                /* cerr << "boncou" << endl; */
            }

            if(j1 == m -1 && dy == 1 || j1 == 0 && dy == -1){
                dy = dy*-1;
                bouncou = true;
                /* cerr << "boncou" << endl; */
            }
            bounces += bouncou;
            i1 += dx;
            j1 += dy;
            /* cerr << (i1,j1) << endl; */
        }
        if(!flag){
            cout << -1 << endl;
        } else {
            cout << bounces << endl;
        }
    }
}
