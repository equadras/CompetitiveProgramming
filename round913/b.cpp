#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    string s; cin >> s;
	int n = s.size();
	vector<int> sta, stb;
	vector<bool> dis(n, 0);
	for (int i = 0; i < n; i++){
		if (s[i] == 'B'){
			if (!sta.size()) continue;
			else {
				dis[sta.back()] = 1;
				sta.pop_back();
			}
			continue;
		} else if (s[i] == 'b'){
			if (!stb.size()) continue;
			else {
				dis[stb.back()] = 1;
				stb.pop_back();
			}
			continue;
		}
		
		if (s[i] >= 'A' && s[i] <= 'Z'){
			sta.push_back(i);
		} else if (s[i] >= 'a' && s[i] <= 'z'){
			stb.push_back(i);
		}
	}
	
	for (int i = 0; i < n; i++){
		if (s[i] != 'B' && s[i] != 'b' && !dis[i]){
			cout << s[i];
		}
	}
	cout << endl;
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
