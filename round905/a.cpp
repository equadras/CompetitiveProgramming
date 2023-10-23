#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    string s = "1234567890";
    string ss; cin >> ss;
    int cnt = 4, x = 0;
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < s.size(); j++) {
        if (ss[i] == s[j]) {
          cnt += abs(x - j);
          x = j;
          break;
        }
      }
    }
    cout << cnt << endl;
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

