#include <iostream>
#include <cmath>

using namespace std;
void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int diff = abs(a - b);

    if (a == b) {
        cout << "0\n";
    } else if (c >= diff) {
        cout << "1\n";
    } else {
        int moves = (diff + c - 1) / c; // Corrected calculation to round up
        cout << moves << endl;
    }
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

