#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> v (n);
        vector <long long> sum (n+1, 0);
        int neg = 0, min = INT_MAX;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] <= 0){
                neg++;
                sum[i+1] = abs(v[i]) + sum[i];
            }else{

            sum[i+1] = v[i] + sum[i];
            }
            if(abs(v[i]) < min){
                /* cout << "o menor valor e: " << v[i] << endl; */
                min = abs(v[i]);
            } 

        /* cout << sum[i+1] << " <- sum array  " << endl; */            
        }
        if(neg % 2 == 0){
            cout << sum[n] << endl;
        } else{
            cout << sum[n] - 2*abs(min) << endl;   
        }

    }
}
