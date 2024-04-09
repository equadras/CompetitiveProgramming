#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int a, b, k, c, m, r, n;
    vector<int> v, ans;
    stack<int> st;
    queue<int> q;
    priority_queue<int> pq;
    cin >> n;

    for (int i = n * (n - 1) / 2 - 1; i >= 0; --i){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int cnt = n - 1;
    for (int i = 0; i < v.size(); ){
        ans.push_back(v[i]);
        i += cnt;
        --cnt;
    }
    ans.push_back(1e9);
    for (int i = 0; i < ans.size(); ++i){
        cout << ans[i] << ' ';
    }
    cout << endl;
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

