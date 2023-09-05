#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxLen = 0, curLen = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                curLen++;
            } else {
                maxLen = max(maxLen, curLen);
                curLen = 0;
            }
        }
        maxLen = max(maxLen, curLen);
        cout << maxLen << endl;
    }
}


