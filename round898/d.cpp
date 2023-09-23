#include <bits/stdc++.h>
  
   using namespace std;
   //#define int long long
  
   void solve(){
       int n, k; cin >> n >> k;
       string s; cin >> s;
  
       int operations = 0;
      for(int i = 0; i < n; i++){
          if (s[i] == 'B'){
              operations++;
              for (int j = i; j < i + k && j < n; j++){
                  if (s[j] == 'B'){
                      s[j] = 'W';
                  }
              }
          }
      }
      cout << operations << endl;
  }
 
  }
 
  signed main(){
      ios_base::sync_with_stdio(0);cin.tie(0);
      int TC = 1;
      if(TC){
          cin >> TC;
          while(TC--) solve();
      } else solve();
      return 0;
  }#include <bits/stdc++.h>

using namespace std;
//#define int long long

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int operations = 0;
    for(int i = 0; i < n; i++){
        if (s[i] == 'B'){
            operations++;
            for (int j = i; j < i + k && j < n; j++){
                if (s[j] == 'B'){
                    s[j] = 'W';
                }
            }
        }
    }
    cout << operations << endl;
}

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
