#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    string s; cin >> s;
    string s1, s2;
    int x = 0, x1 = 0;
    for (int i = 0; i < size(s); i++){
		if(islower(s[i]))
			x++;
		else
			x1++;
		s1 += toupper(s[i]);
		s2 += tolower(s[i]);
	}

	if(x < x1) cout << s1;
	else cout << s2;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int TC = 0;
    if(TC){
        cin >> TC;
        while(TC--) solve();
    } else solve();
    return 0;
}
