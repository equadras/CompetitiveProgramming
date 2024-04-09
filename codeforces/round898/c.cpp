#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<string> alvo(11);

    for (int i = 0; i < 10; ++i)
        cin >> alvo[i];

    int res = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (alvo[i][j] == 'X') {
                if (i == 0 || i == 9 || j == 0 || j == 9) {
                    res += 1;
                } else if (i == 1 || i == 8 || j == 1 || j == 8) {
                    res += 2;
                } else if (i == 2 || i == 7 || j == 2 || j == 7) {
                    res += 3;
                } else if (i == 3 || i == 6 || j == 3 || j == 6) {
                    res += 4;
                } else {
                    res += 5;
                }
            }
        }
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int TC = 1;
    if (TC) {
        cin >> TC;
        while (TC--) solve();
    } else {
        solve();
    }

    return 0;
}
