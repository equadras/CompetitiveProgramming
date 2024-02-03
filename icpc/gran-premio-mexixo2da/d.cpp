#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

const int maxn = 1e6+5;
int a[maxn], b[maxn], f[maxn];

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m, n; cin >> m >> n;
    vector<int> a(m);
    vector<int> b(n);
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 1; i < m-2; i++) a[i] = a[i+2] - a[i+1];
    m--;
    for (int i = 1; i < n-2; i++) b[i] = b[i+2] - b[i+1];
    n--;
    f[0] = 0;    
    f[1] = 0;    
    
    for (int i = 0; i < m; i++){
        int j = f[i];
        while (j && a[i] != a[j]) j = f[j];
        f[i+1] = (a[i] == a[j] ? j+1 : 0);
    }
    int res = 0;
    for (int i = 0; i < m; i++){
        int j = f[i];
        while (j && b[i] != a[j]) j = f[j];
        if (b[i] == a[j]) j = f[j];
        if (j == m){
            res++;
            j = f[j];
        }
    }
    cout << res << endl;

    return 0;
}
