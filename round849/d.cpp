#include "bits/stdc++.h"

using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; string s; cin >> n >> s;
        vector<int> cnt(26, 0), p(26, 0);
        for(auto x: s) cnt[x - 'a']++;
        int r = 0;
        
        for(int i = 0; i < n; ++i) {
            char x = s[i];
            cnt[x - 'a']--;
            p[x - 'a']++;
            int cur = 0;
            for(int j = 0; j < 26; ++j) {
                cur += min(1, cnt[j]) + min(1, p[j]);
            }
            if(cur > r) {
                r = cur;
            }
        }
    
    
        cout << r << endl;
    }
}


