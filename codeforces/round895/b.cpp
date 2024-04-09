#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int k= 2e9; // infinito
    for (int i=0; i < n; i++) {

        int d, s; cin >> d >> s;


        if (s % 2 == 0) s--;
        k = min(k, (d + (s / 2)));

    }
    cout << k << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }

    return 0;
}
