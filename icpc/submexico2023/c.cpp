#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;

const ll maxn = 22;
ll dp [maxn][102][102][102];
ll fat[102];
ll invfat[102];

ll MOD = 1e9+7;

ll binpow(ll a, ll b){
    ll res = 1;
    while (b > 0){
        if (b & 1) res = res *a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

ll inv (ll a){
    return binpow(a, MOD-2);
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    fat[0] = 1;
    for (int i = 1 ; i < 102; i++){
        fat[i] = fat[i-1] * i % MOD;
    }

    for (int i = 0 ; i < 102; i++){
        invfat[i] = inv(fat[i]);
    }

    /* cout << fat[39] * invfat[39] % MOD << endl; */
    int n, r, g, b; cin >> n >> r >> g >> b;
    
    dp[0][r][g][b] = 1;

    for (int i = 0; i < n; i++){
        for (int R = 0; R <= r; R++){
            for (int G = 0; G <= g; G++){
                for (int B = 0; B <= b; B++){
                    
                    //uma cor so  
                    if (R >= i+1) dp[i+1][R-(i+1)][G][B] = (dp[i+1][R-(i+1)][G][B] + dp[i][R][G][B]) % MOD;
                    if (G >= i+1) dp[i+1][R][G- (i+1)][B] = (dp[i+1][R][G-(i+1)][B] + dp[i][R][G][B]) % MOD;
                    if (B >= i+1) dp[i+1][R][G][B-(i+1)] = (dp[i+1][R][G][B-(i+1)] + dp[i][R][G][B]) % MOD;

                    //duas cores
                    if ((i+1) % 2 == 0){
                        i++;
                        ll c; c = fat[i] * (invfat[i/2] * invfat[i/2] % MOD) % MOD;
                        i--;
                        if (R >= (i+1)/2 && G >= (i+1)/2) dp[i+1][R-((i+1)/2)][G-((i+1)/2)][B] = (dp[i+1][R-((i+1)/2)][G-((i+1)/2)][B] + (dp[i][R][G][B]*c)) % MOD;
                        if (R >= (i+1)/2 && B >= (i+1)/2) dp[i+1][R-((i+1)/2)][G][B-((i+1)/2)] = (dp[i+1][R-((i+1)/2)][G][B-((i+1)/2)] + (dp[i][R][G][B]*c)) % MOD;
                        if (G >= (i+1)/2 && B >= (i+1)/2) dp[i+1][R][G-((i+1)/2)][B-((i+1)/2)] = (dp[i+1][R][G-((i+1)/2)][B-((i+1)/2)] + (dp[i][R][G][B]*c)) % MOD;
                    }

                    //tres cores
                    if ((i+1) % 3 == 0){
                        i++;
                        ll c; c = ((fat[i] * invfat[i/3] % MOD) * invfat[i/3] % MOD) * (invfat[i/3]) % MOD;
                        i--;
                        if (R >= (i+1)/3 && G >= (i+1)/3 && B >= (i+1)/3) dp[i+1][R-(i+1)/3][G-(i+1)/3][B-(i+1)/3] = (dp[i+1][R-(i+1)/3][G-(i+1)/3][B-(i+1)/3] + (dp[i][R][G][B]*c)) % MOD;

                    }

                }
            }
        } }
    ll res = 0;
    for (int R = 0; R <= r; R++){
        for (int G = 0; G <= g; G++){
            for (int B = 0; B <= b; B++){
                res = (res + dp[n][R][G][B]) % MOD;
            }
        }
    }

    cout << res << endl;

    return 0;
}
