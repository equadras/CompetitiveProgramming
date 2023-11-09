#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

void solve(){
    int n; cin >> n;
    vector <int> a(n);
	vector <int> impar;
	vector <int> par;
	for (int i = 0;i < n; i++){
        cin >> a[i];
        if (a[i] % 2 == 0){
            par.push_back(a[i]); 
        } else {
            impar.push_back(a[i]); 
        }
    }

    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end());

	/* for (int i = 0;i < par.size()-1; i++){ */
        /* cout << par[i] << "  "; */
	/* } */
    /* cout << endl; */
	/* for (int i = 0;i < impar.size()-1; i++){ */
        /* cout << impar[i] << "  "; */
	/* } */
    /* cout << endl; */

    vector <int> aux;
    int ind1, ind2;
    ind1 = 0, ind2 = 0;
    for (int i = 0;i < n; i++){
        int atual = a[i]; 
        if (!(atual % 2)){ //se e par
            aux.push_back(par[ind1]);
            ind1++;
        } else {
            aux.push_back(impar[ind2]);
            ind2++;
        }
    }

	sort (a.begin(), a.end());

	for (int i = 0;i < n; i++){
		if (a[i] != aux[i]){
            puts("NO");
            return;
		}
	}
    puts("YES");
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
