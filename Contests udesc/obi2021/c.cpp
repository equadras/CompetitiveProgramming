#include <bits/stdc++.h>
using namespace std;

const int maxn = 105;
int ans[maxn], ultima[maxn], atv[maxn];
int main() {
    int n, t = 1; 
    cin >> n;
    bool ok = 0;
    for(int i = 0; i < n; i++){
        char c; int x; cin >> c >> x;
        if(c == 'T'){
            t += x, ok = 0;
        }
        else if(c == 'R'){
            t += ok; ok = 1;
            ultima[x] = t;
            atv[x] = 1;
        } else {
            t += ok; 
            ok = 1;
            ans[x] += t - ultima[x];
            atv[x] = 0;
        }
    }
    for(int i = 1; i <= 100; i++){
        if(ultima[i]){ 
            cout << i << " ";
            if(atv[i]) cout << "-1" << "\n";
            else cout << ans[i]  << "\n";
        }
    }
}
