#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
		if(n==1){
			cout << 1 << endl;
		}
		else if(n%2 == 1){
			cout << -1 << endl;
		}
		else{
			for(int i=0; i<n; i++){
				if(i%2==1) cout << i << " ";
				else cout << n-i << " ";
			}
		}
	}
	return 0;
}
