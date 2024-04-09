#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, p;
        cin >> h >> p;
        int n = (1 << h) - 1;
        int r = 1, k = 0, q = 1, d = 0, ans = 0;
        while (r < n) {
            k = log2(r);
            q = 1 << k;
            d = r - q + 1;
            int rt = min(q, p) + d;
            ans += (n - (r - q)) * ((rt + p - 1) / p);
            r = rt;
        }
        cout << ans << endl;
    }
    return 0;
}

