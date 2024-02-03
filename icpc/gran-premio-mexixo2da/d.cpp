#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m, n; cin >> m >> n;
    vector<int> a(m);
    vector<int> b(n);
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 1; i < m-2; i++) a[i] = a[i+2] - a[i+1];

    for (int i = 1; i < n-2; i++) b[i] = b[i+2] - b[i+1];

    return 0;
}
