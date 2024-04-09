#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end());

    int A = a[0], B = a[1], C = a[n-2], D = a[n-1];
    int res = (abs(A - D) + abs(D - B) + abs(B - C) + abs(C - A));
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
