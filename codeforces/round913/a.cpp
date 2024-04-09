#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    	char res; cin >> res;
		int b; cin >> b;
		for (int i = 1; i <= 8; i++){
			if (b != i) cout << res << i << endl;
        }
		for (int i = 0; i < 8; i++){
			if ((char)('a' + i) != res) cout << (char)('a' + i) << b << endl;
        }
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
