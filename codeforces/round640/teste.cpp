#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> pref(n + 1);
    vector<int> arr;
    vector<int> arr2;
    int soma = 0;

    for (int i=0; i < n; i++) {
        int num; cin >> num;
        arr.push_back(num);
        arr2.push_back(num);
        soma += num;
        pref[i + 1] = soma;
    }
    sort(arr2.begin(), arr2.end());
    int p = 0;
    for (int i=1; i <= n; i++) {
        for (int j=2; (i - j) >= 0; j++) {
        /* cout << "i - j -> " << i << " - " << j << endl; */
            int x = pref[i];
            int m = pref[(i - j)];
            /* cout << "_---------------" << endl; */
            /* cout << "map[x - m] -> " << x - m << endl; */
            if (lower_bound (arr2.begin(), arr2.end(), (x-m)) != arr2.end()) p ++;
        }
        /* if (map[arr[i - 1]]) p++; */
    }
    cout << p << endl;
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
