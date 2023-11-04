#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n, m, k; cin >> n >> m >> k;
    deque<int> je(n+1);
    deque<int> ge(m+1);
    int res = 0;
    for(int i = 0; i < n; i++){
        cin >> je[i];
        res += je[i]; 
    } 
    for(int i = 0; i < m; i++) cin >> ge[i];

    sort(je.begin(), je.end());
    sort(ge.begin(), ge.end());
    
    for(int i = 0; i < k; i++){
        int ma = ge[m-1], mi = je[0];
        res += ma;
        res -= mi;

        //remove os manos
        ge.pop_back();
        je.pop_front();

        //swap neles
        je.push_back(ma);
        ge.push_back(mi);

        sort(je.begin(), je.end());
        sort(ge.begin(), ge.end());

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
