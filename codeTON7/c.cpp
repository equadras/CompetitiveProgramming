#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n, x; cin >> n >> x;
    vector<pair<int,int>> a(n);
    vector<pair<int,int>> b(n);
    int c[n];
    bool f = true;

    for (int i = 0; i < n; i++){
        int x ; cin >> x;
        a[i].first = x , a[i].second = i;
    }
    for (int i = 0; i < n; i++){
        int x ; cin >> x;
        b[i].first = x , b[i].second = i;
    }
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    for (int i = 0; i < x; i++){
        c[a[n-x+i].second] = b[i].first;
        if (a[n-x+i].first <= b[i].first) f = false;
    }
    for (int i = 0; i < n-x; i++){
        if (a[i].first > b[i+x].first) f = false;
        c[a[i].second] = b[i+x].first;
    }
    if (f == false) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) cout << c[i] << " ";
        cout << endl;
    }
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
