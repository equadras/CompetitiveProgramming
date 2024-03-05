#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

pair<int,int> calc(int n, int m, int x, int y){
    pair<int,int> b = {-1,-1};
    int yy = x-y+m-1;
    if (yy &1) return b;
    else {
        yy /= 2;
        int xx = x-yy;
        if (xx < 0 || yy < 0 || xx >= n || yy >= m) return b;
        else {
            pair<int,int> cord = {xx+1,yy+1};
            return cord;
        }
    }
}

void solve(){
    int n,m;
    cin >> n >> m;

    cout << "? " << 1 << " " << 1 << endl;

    int x;
    cin >> x;

    cout << "? " << n << " " << m << endl;
    int y;
    cin >> y;
    y = n+m-2-y;

    cout << "? " << 1 << " " << m << endl;
    int z;
    cin >> z;

    pair<int,int> m1 = calc(n,m,x,z);
    pair<int,int> m2 = calc(n,m,y,z);

    if (m2.first == 01){
        cout << "! " << m1.first << " " << m1.second << endl;
        return;
    }
    cout << "? " <<m2.first << " " << m2.second << endl;
    cin >> x;

    if (!x) cout << "! " << m2.first << " " << m2.second << endl;
    else cout << "! " << m1.first << " " << m1.second << endl;

    if (m1.first == -1){
        cout << "! " << m2.first << " " << m2.second << endl;
        return;
    }

    cout << "? " <<m1.first << " " << m1.second << endl;
    cin >> x;

    if (x == 0) cout << "! " << m1.first << " " << m1.second << endl;
    else cout << "! " << m2.first << " " << m2.second << endl;
}

signed main(){
    /* ios_base::sync_with_stdio(0);cin.tie(0); */
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}


