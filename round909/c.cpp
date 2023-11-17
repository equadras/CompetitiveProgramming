#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
     int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
  int current_sum = arr[0];
    int max_sum = arr[0];

    for (int i = 1; i < n; ++i) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }
    cout << max_sum << endl;

}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 1;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
