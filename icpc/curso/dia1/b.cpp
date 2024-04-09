#include <bits/stdc++.h>
using namespace std;
void solve () {
    int n; cin >> n;
    fflush(stdout);
    vector<string> v;
    for (int i=0; i <= n; i++) {
        string s;
        getline(std::cin, s);
        if (i == 0) continue;
        reverse(s.begin(), s.begin() + s.size() / 2);
        reverse(s.begin() + s.size() / 2, s.end());
        v.push_back(s);
    }
    for (auto cara: v) cout << cara << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0); 
    int TC = 0;
    if (TC){
        cin >> TC;
        while (TC--) solve();
    } else {
        solve();
    }
    return 0;
}
