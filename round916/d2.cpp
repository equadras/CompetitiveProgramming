
#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector <pair <int, int>> a(n);
    vector <pair <int, int>> b(n);
    vector <pair <int, int>> c(n);

    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i = 0; i < n; i++){
        cin >> b[i].first;
        b[i].second = i;
    }
    for (int i = 0; i < n; i++){
        cin >> c[i].first;
        c[i].second = i;
    }

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());

    int res = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3;j++){
            for (int x = 0; x < 3; x++){
                if ((a[i].second == b[j].second || a[i].second == c[x].second) || c[x].second == b[j].second) continue;
                res = max(res, a[i].first + b[j].first + c[x].first);
            }
        }
    }
    cout << res << endl;
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

