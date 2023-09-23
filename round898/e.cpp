#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve(){
    int n , x; cin >> n >> x;
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
	int l = 0, r = 2e9 + 5;

    int zero = 0;
    while(l < r){

        int mid = (l+r+1)/2;
//        cout << l << "   " << r << "  " << mid << endl;
        int res = 0;
        for(int i = 0; i < n; i++){
            res += max(mid-arr[i],zero);
        }
        if(res <= x) l = mid;
        else r = mid -1;
    }
	/* while(l < r){ */
        /* if(cnt++ == 1000){ */
            /* l++; */
            /* break; */
        /* } */ 
	/* 	int mid = l + (r + l + 1) / 2; */
        
	/* 	int res = 0; */
	/* 	for(int i = 0; i < n; i++){ */
            /* res += max(mid - arr[i], 0); */
	/* 	} */
/* //        cout << res << "  " << x << endl; */
	/* 	if(res <= x) l = mid; */
	/* 	else r = mid - 1; */
    /* } */
	cout << l << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tc = 1;
    if(tc){
        cin >> tc;
        while(tc--) solve();
    } else solve();
    return 0;
}
