#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    set<int> st;

    for (int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++){
			int soma = a[i];
			for(int j = i+1; j < n; j++){
				soma += a[j];
				if(soma > n) break;
				else st.insert(soma);
			}
		}
		int res = 0;
		for(auto ele : a){
			if(st.find(ele) != st.end()) res++;
		}
		cout << res << endl;
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
