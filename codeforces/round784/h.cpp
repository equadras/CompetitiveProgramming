#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> arr(31);
        for (int i=0; i < n; i++){
            int in; cin >> in;

            int idx = 0;
            while (idx <= 30){
                if (!(in & 1)) arr[idx]++;
                in >>= 1;
                idx++;
            }
        }
        int ans = 0;
        for (int i = 30; i >= 0; i--){
            if (!(arr[i] <= k)){
                ans += (0 << i);
            } 
            else{
                k -= arr[i];
                ans += (1 << i);
            }
        }
        cout << ans << endl;
    }
}

