#include <bits/stdc++.h>

using namespace std;

int n, m;

bool solve(int x) {
    if (x == m) return true;
    if (x < m) return false;
    if (x % 3) return false;
    return solve(x / 3) || solve(x / 3 * 2);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        cin >> n >> m; 
        cout << (solve(n) ? "YES\n" : "NO\n");
    }
}
