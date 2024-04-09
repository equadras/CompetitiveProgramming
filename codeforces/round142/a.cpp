#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long

const int maxn = 1e8 + 5;

vector<bool> prime(maxn, true);
vector<int> v;

void sieve(){
    prime[0] = prime[1] = false;
    for (int i = 2; i <= sqrt(maxn); ++i){
        if (prime[i]){
            for (int j = i * i; j <= maxn; j += i){
                prime[j] = false;
            }
        }
    }
}

void solve(){
    int n; cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;

        int l = 0, r = v.size() - 1;
        bool found = false;

        while (l <= r){
            int mid = (l + r) / 2;
            if (v[mid] == x){
                found = true;
                break;
            }

            if (v[mid] < x){
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int TC = 0;

    sieve();
    for (int i = 2; i <= maxn; i++){
        if (prime[i]) v.push_back(1LL * i * i);
    }

    if (TC){
        cin >> TC;
            solve();
    }
    else solve();
    return 0;
}

