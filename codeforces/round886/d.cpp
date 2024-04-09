#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;
//#define int long long

string nm(__int128_t x){
	string s;
	while(x){
		int alg= x % 10;
		string cara = to_string(alg);
		s += cara;
		x /= 10;
	}
	return s;
}

ll res(__int128_t num){
	__int128_t l = 0;
	__int128_t r = 1e18;
	ll resposta = 0;
	__int128_t mid = (l+r)/2;

	while(l <= r){
		mid = (l+r)/2;
		if(mid*mid == num)break;
		if(mid*mid > num){
			r = mid-1;
		}else if(mid*mid < num){
			l = mid+1;
		}
	}
	resposta = mid;
	return resposta;
}

void solve(){
	int n;  cin >> n;
	ll c; cin >> c;
	vector<ll> arr(n);
 
	for(int i = 0; i < n; i++) cin >> arr[i];
	__int128_t a = 4*n, b = 0;

	for(int i = 0; i < n; i++){
		ll v = arr[i];
		b += v*4;
		c -= (v*v);
	}

	__int128_t delta = (b*b) + (4*a*c);
	string bbbb = nm(delta);
	__int128_t rd = res(delta);
 
	__int128_t w = (rd - b) / (2 * a);
	ll x = w;
 
	cout << x << endl;
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
