#include <bits/stdc++.h>

using namespace std;
const int maxn = 205;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> arr(maxn);
        for (int i = 0; i < m; i++) {
            int n1, n2; cin >> n1 >> n2;
            arr[n1]++;
            arr[n2]++;
        }
        map<int, int> mp;
        for (int i = 1; i <= n; i++) {
            mp[arr[i]]++;
        }
        vector<int> tam;
        for (auto p : mp) {
            tam.push_back(p.second);
        }
        sort(tam.begin(), tam.end());
        if (tam.size() == 3) {
            cout << tam[1] << ' ' << tam[2] / tam[1] << '\n';
        }
        else {
            cout << tam[0] - 1 << ' ' << tam[1] / (tam[0] - 1) << '\n';
        }
    }
}
