#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> cnt;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        bool found = false;
        for (auto p : cnt) {
            if (p.second >= 3) {
                cout << p.first << "\n";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "-1\n";
        }
    }
    return 0;
}

