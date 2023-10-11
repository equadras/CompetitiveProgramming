#include <bits/stdc++.h>

using namespace std;
//#define int long long

int a[5] = {600, 60, 0, 10, 1};
int oks[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};

void solve(){
    string s; cin >> s;
	int x; cin >> x;
	int tot = 0;
	set<int> t;
	for (int i = 0; i < 5; i++){
		tot += (int)(s[i] - '0') * a[i];
	}
	for (int i = 0; i < 2022; i++){
		t.emplace(tot);
		tot += x;
		tot %= 1440;
	}
	int res = 0;
	for (int i : t) {
		for (int j = 0; j < 16; j++){
			if (oks[j] == i) res++;
		}
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
