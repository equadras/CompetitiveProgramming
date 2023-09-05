#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--){
        int n, c, ans = 0; cin >> n >> c;

        vector<pair<int,int>> a(n+1);
        vector<int> custo(n+1,0);

        for(int i = 1; i <= n; ++i){
            cin >> custo[i];
            if(i + custo[i] > n + 1 - i + custo [i]){
                a[i].first = n + 1 - i + custo[i];
            } else {
                a[i].first = i + custo[i];
            }
            a[i].second = i;
        }

        sort(a.begin()+1, a.end());

        vector<long long> pref(n+1,0);
        
        for(int i = 1; i <= n; ++i){
            pref[i] = pref[i-1] + a[i].first;
        }

        for(int i = 1; i <= n; ++i){
            int indice = a[i].second;
            if(custo[indice] + indice > c) continue;
            int rem = c - custo[indice] - indice;
            int j = upper_bound(pref.begin()+1, pref.end(), rem) - pref.begin() - 1;
            if(j < i){
                ans=max(j + 1, ans);
            } else {
                rem = c - (pref[i-1] + custo[indice] + indice);
                if(rem < 1){
                    ans = max(ans, i-1);
                    continue;
                }
                j = upper_bound(pref.begin() + i + 1, pref.end(), rem + pref[i]) - pref.begin() - 1;
                ans = max(ans, i + (j - i));
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

