#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s; cin >> n >> s;
    int v;
    vector <int> pref(n+1);
    map <int, int> mp;
    mp[0] = 1;
    int r = 0;

    for(int i= 0; i < n; i++){
        cin >> v;
        pref[i+1] = pref[i] + v;
        if(pref[i+1] >= s){
            r += mp[pref[i+1]-s];
        }
        mp[pref[i+1]]++;
    }
    cout << r << "\n";
}
