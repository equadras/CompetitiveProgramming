#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

void solve(){
    string s; cin >> s;

	s.replace(s.find("at", 1), 2, "@");
	int n = 1;
	while ((n = s.find("dot", n)) != s.npos){
		s.replace(n, 3, ".");
    }

	if (s[s.length()-1] == '.') s.replace(s.length()-1, 1, "dot");
	cout << s << "\n";
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
