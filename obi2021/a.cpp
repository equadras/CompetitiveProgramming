#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int cnt = 0;
    char in; 
    for(int i = 0; i < 6; i++){
       cin >> in;
        if(in == 'V'){
            cnt++; 
        }
    }
    if(cnt > 4){
        cout << 1;
    }
    if(cnt > 2 && cnt < 5){
        cout << 2;
    }
    if(cnt > 0 && cnt < 3){
        cout << 3;
    } if(cnt == 0) {
        cout << -1;
    }
}
