#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n+1);
        for(int i = 1; i <= n; i++) cin >> v[i];

        int aw = 0, bw = 0, l = 0, r = n+1;
        int ans = 0;

        while(l < r){
            if(aw == bw){
                if(l != 0 && r != n+1) ans = max(ans, (l + (n - r+1)));
                l++;
                r--;
                bw += v[r];
                aw += v[l];
            }
            if(aw > bw){
                r--;
                bw += v[r];
            }
            if(bw > aw){
                l++;
                aw += v[l];
            }
        }
        /* cout << aw << " " << bw << "\n"; */
        cout << ans << "\n";
    }
}
