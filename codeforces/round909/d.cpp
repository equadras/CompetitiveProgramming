#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    map <int,int> mp;

    for(int i = 0; i < n; i++){
      cin >> arr[i];
      mp[arr[i]]++;
    }

    sort(arr.begin(),arr.end());
    int res = 0, cnt = 0;

    for(int i = 0; i < n; i++){
      mp[arr[i]]--;
      int atual = arr[i];
      for (int j = 0; j <= 32; j++){
        atual = arr[i] * (1ll << j);
        if (atual > 1e9){
          break;
        }
        int cnt = mp[atual];
        if (cnt > 0){
          if (abs(atual - arr[i]) == j){
            res += cnt;
          }
        }
      }
    }

    cout << res << endl;
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
