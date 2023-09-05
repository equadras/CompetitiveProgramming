#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin >> n >> x;
    vector <int> v(n);
    map <int, int> map;
    bool flag = false;
    for(int i = 0; i < n; i++){
        cin >> v[i]; 
        if(map.count(x-v[i])){
            cout << map[x - v[i]] << " " << i+1 << "\n";
            flag = true;
        }
        map[v[i]] = i+1;
    }
    if(!flag) cout << "-1\n";
}

