#include <bits/stdc++.h>

using namespace std;
//#define int long long

const int maxn = 2e5+5;

vector<int> a(maxn);
vector<int> h(maxn);
vector<int> pref(maxn);
vector<int> tam(maxn);

void solve(){
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        pref[i+1] = pref[i]+a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    tam[n-1] = 1;
    for(int i = n-2; i >= 0; i--){
        if(h[i]%h[i+1] == 0){
            tam[i] = tam[i+1]+1;
        }
        else {
            tam[i] = 1;
        }
    }
    int l = 1, r = maxn;

    while (l < r){
        int mid = (l + r) / 2;
        int f = false;
        for (int i = 0; i < n - mid + 1; i++){
            if (tam[i] < mid) continue;
            int soma = pref[i + mid] - pref[i];
            if (soma <= k){
                f = true;
                break;
            }
        }
        if(f){
            l = mid + 1;
        } 
        else{
            r = mid - 1;
        }
    }

    cout << "resposta! = " << r << endl;
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
