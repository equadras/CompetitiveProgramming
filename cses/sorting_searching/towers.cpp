#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> x;
	for (int i = 0; i < n; ++i){
		int in; cin >> in;

		int l = 0, r = x.size();
		while (l < r){
			int mid = (l + r) / 2;
			if (x[mid] > in) r = mid;
			else l = mid + 1;
		}
		if (l == x.size()) x.push_back(in);  
		else x[l] = in;     
	}
	cout << x.size() << "\n";
}
