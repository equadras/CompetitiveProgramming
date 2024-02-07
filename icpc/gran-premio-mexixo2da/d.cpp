#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;


const int maxn = 1e6+5;
int a[maxn];
int b[maxn];
int kmp[maxn];

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m, n; cin >> m >> n;
    
    if (m == 1){
        cout << n << endl;
        return 0;
    }
    
    for (int i = 1; i <= m; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    for (int i = 0; i <= m-2; i++) a[i] = a[i+2] - a[i+1];m--;
    for (int i = 0; i <= n-2; i++) b[i] = b[i+2] - b[i+1];n--;
    
    kmp[0] = 0; kmp[1] = 0;

    for (int i = 1; i < m; i++){
        int j = kmp[i];
        while (j > 0 && (a[i] != a[j])) j = kmp[j];
        if (a[i] == a[j]) kmp[i+1] = j+1;
        else kmp[i+1] = 0;
    }

    ll res = 0; ll j = 0;

    for (int i = 0; i < n; i++){
        while (j > 0 && (b[i] != a[j])) j = kmp[j];
        if (b[i] == a[j]) j++;
        if (j == m){
            res++;
            j = kmp[j];
        }
        
    }
    cout << res << endl;

    return 0;
}


