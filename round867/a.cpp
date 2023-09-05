#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int q; cin >> q;
    while (q--){
        int arr[100];
        int n, t; cin >> n >> t;

        for (int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        int a = -1, b = -1, c;
        for (int i = 1; i <= n; i++){
            cin >> c;
            if (arr[i] + i - 1 <= t){
                if (c > a)
                    a = c, b = i;
            }
        }
        cout << b << endl;
    }
    return 0;
}

