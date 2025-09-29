#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

void solve(){
    int n, k, l, r; cin >> n >> k >> l >> r;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    ll answer = 0;
    
    vector<int> minR(n, -1), maxR(n, -1);
    
    map<int, int> cnt;
    int j = 0;
    for (int i = 0; i < n; i++){
        while(j < n && (int)cnt.size() < k){
            cnt[a[j]]++;
            j++;
        }
        if ((int)cnt.size() == k){
            minR[i] = j - 1;
        }
        
        cnt[a[i]]--;
        if (cnt[a[i]] == 0) cnt.erase(a[i]);
    }
    
    cnt.clear();
    j = 0;
    for (int i = 0; i < n; i++){
        while(j < n && (cnt.count(a[j]) > 0 || (int)cnt.size() < k)){
            cnt[a[j]]++;
            j++;
        }
        if ((int)cnt.size() == k){
            maxR[i] = j - 1;
        }
        
        cnt[a[i]]--;
        if (cnt[a[i]] == 0) cnt.erase(a[i]);
    }
    
    for (int i = 0; i < n; i++){
        if (minR[i] == -1) continue;
        
        int ll = max(minR[i], i + l - 1);
        int rr = min(maxR[i], i + r - 1);
        
        if (ll <= rr){
            answer += rr - ll + 1;
        }
    }
    
    cout << answer << endl;
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
