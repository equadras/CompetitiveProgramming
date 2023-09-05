#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int q; cin >> q;
        vector <int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int sum = 0;
        for( auto i : v) sum +=i;
        vector <int> prefix(n+1);
        for(int i = 1; i <= n; i++){
            prefix[i] = v [i-1] + prefix[i-1];
        }

        //for(int i = 0; i <= n; i++){
            //cout << prefix[i];
        //}

        while (q--){
            int l, r, k; cin >> l >> r >> k;
            int x = (r -l + 1) * k;
            
            if((sum - (prefix[r] - prefix[l -1]) + x) & 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }

        }
    }
}
