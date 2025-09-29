#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif
#define endl "\n"
typedef long long ll;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    
    vector<pair<ll, ll>> stars(n);
    for(int i = 0; i < n; i++){
        cin >> stars[i].first >> stars[i].second;
    }
    
    // Calculate distances between consecutive stars
    vector<ll> dist(n-1);
    for(int i = 0; i < n-1; i++){
        ll dx = abs(stars[i+1].first - stars[i].first);
        ll dy = abs(stars[i+1].second - stars[i].second);
        // Since stars are aligned, one of dx or dy is 0
        dist[i] = dx + dy;
    }
    
    for(int i = 0; i < n-1; i++){
        if(dist[i] < 2){
            cout << -1 << endl;
            return 0;
        }
    }
    
    // Find maximum R_1
    // We need: R_i < dist[i] for all i < n-1
    // And: R_i + R_{i+1} < dist[i] for all i < n-1
    
    // Working backwards from constraints:
    // The maximum possible radius at each position
    vector<ll> maxRadius(n);
    
    // Start from the end
    maxRadius[n-1] = LLONG_MAX; // Last star has no next constraint
    
    // Work backwards
    for(int i = n-2; i >= 0; i--){
        // R_i must be < dist[i]
        maxRadius[i] = dist[i] - 1;
        
        // Also, R_i + R_{i+1} < dist[i]
        // So R_i < dist[i] - R_{i+1}
        // To maximize R_i, we want minimum R_{i+1}, which is 1
        // But we need to ensure the propagation works
        
        if(i < n-2){
            // We need to ensure that if we set R_i to some value,
            // we can still satisfy all future constraints
            // The safest is to ensure R_i allows R_{i+1} to be at least
            // what's needed for the next segment
            
            // For a more precise calculation:
            // We need to track minimum required R_{i+1}
            ll minNextRadius = 1;
            
            // But R_{i+1} also needs to satisfy its own constraints
            if(i+1 < n-1){
                // R_{i+1} < dist[i+1]
                // R_{i+1} + R_{i+2} < dist[i+1]
                // So R_{i+1} < dist[i+1] - 1 (since R_{i+2} >= 1)
                minNextRadius = 1;
            }
            
            // R_i < dist[i] - minNextRadius
            maxRadius[i] = min(maxRadius[i], dist[i] - minNextRadius);
        }
    }
    
    // The answer is the maximum possible R_1
    // But we need to verify it works through the entire chain
    ll R1 = maxRadius[0];
    
    // Verify by trying to construct a valid configuration
    vector<ll> R(n);
    R[0] = R1;
    
    bool valid = true;
    for(int i = 1; i < n; i++){
        // R_{i-1} + R_i < dist[i-1]
        // So R_i < dist[i-1] - R_{i-1}
        ll maxRi = dist[i-1] - R[i-1];
        
        if(i < n-1){
            // Also R_i < dist[i]
            maxRi = min(maxRi, dist[i] - 1);
        }
        
        if(maxRi < 1){
            valid = false;
            break;
        }
        
        // Set R_i to 1 to maximize space for earlier radii
        R[i] = 1;
    }
    
    if(valid && R1 >= 1){
        cout << R1 << endl;
    } else {
        // Try binary search for maximum R1
        ll left = 1, right = dist[0] - 1;
        ll answer = -1;
        
        while(left <= right){
            ll mid = (left + right) / 2;
            
            // Check if R1 = mid works
            R[0] = mid;
            valid = true;
            
            for(int i = 1; i < n; i++){
                ll maxRi = dist[i-1] - R[i-1];
                if(i < n-1){
                    maxRi = min(maxRi, dist[i] - 1);
                }
                
                if(maxRi < 1){
                    valid = false;
                    break;
                }
                R[i] = 1; // Use minimum to maximize earlier radii
            }
            
            if(valid){
                answer = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        cout << answer << endl;
    }
    
    return 0;
}
