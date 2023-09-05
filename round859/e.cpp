#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        vector<int> prefix(n+1);
        for(int i = 1; i <= n; i++){
            prefix[i] = prefix[i- 1] + v[i-1];
        }
        int res = 0;
        int l = 1, r = n; 
        while(l <= r){
            int mid = (l + r)/2;
            cout << "? " << mid - l +1 << " ";
            for(int i = l; i <= mid; i++){
                cout << i << " ";
            } cout << endl;
            int x; cin >> x;
            if(prefix[mid] - prefix[l-1] == x) {
                l = mid + 1;
            } else {
                res = mid;
                r = mid- 1;
            }
        }

        cout << "! " << res << endl;
    }
}
