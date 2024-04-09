#include <bits/stdc++.h>

using namespace std;
//#define int long long

const int maxn = 8;
char arr[maxn][maxn];

void solve(){
    for(int i = 0; i < maxn ; i++){
        for(int j = 0; j < maxn; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < maxn ; i++){
        int dr = 0;
        for(int j = 0; j < maxn; j++){
            if(arr[i][j] == 'R'){
                dr++;
            }
        }
        if(dr == 8){
            cout << 'R' << endl;
            return;
        }
    }
    cout << 'B' << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 1;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}


