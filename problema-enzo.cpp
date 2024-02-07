#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    int n = 10;
    int a [10] = {1,2,3,4,5,6,7,8,9,10};
    int target = 5; 


    map<int, vector<int>> pref; 
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        if (pref.find(sum - target) != pref.end()){
            for (auto i : pref[sum - target]) cout << i + 1 << " " << i << endl;
        }
        pref[sum].push_back(i);
    }
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
