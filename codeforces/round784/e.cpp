#include<bits/stdc++.h>

using namespace std;

#define ll long long

int get(string s){
	return (s[0]-'a')*26 + s[1]-'a';
}

int main(){
ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		vector<int> ele1(26), ele2(26);
		vector<int> p(26*26);
		ll ans = 0;
		for (int i = 0; i < n; i++) {
			string s; cin >> s;
			int id = get(s);
			ans += ele1[s[0]-'a'] + ele2[s[1]-'a'] - 2*p[id];
			ele1[s[0]-'a']++;
			ele2[s[1]-'a']++;
			p[id]++;
		}
		cout << ans << endl;
	}
}
