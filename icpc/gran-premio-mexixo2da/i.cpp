#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll n, m ,k; cin >> n >> m >> k;
    if (n / k >= m) cout << "Iron fist Ketil" << endl;
    else cout << "King Canute" << endl;
    return 0;
}

