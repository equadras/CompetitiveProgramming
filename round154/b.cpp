#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
//#define int long long

const int maxn = 5005;
const int maxn = 1e3+5;

string s, t;
bool fs[maxn][maxn], gs[maxn][maxn];
bool ft[maxn][maxn], gt[maxn][maxn];
bool res[maxn];
vector<int> arr, arr2;

void solve(){
    arr.clear();
    arr2.clear();
    cin >> s >> t;

    for(int i = 0; i <= s.size(); i++){
        res[i] = 0; 
    }

    for(int i = 1; i <= s.size(); i++){
        for(int j = 1; j <= s.size(); j++){
            fs[i][j] = gs[i][j] = ft[i][j] = gt[i][j] = 0;
        }
    }

    for(int i = 0; i < s.size(); i++){
        if (s[i] == '0'){
            arr.push_back(i + 1);
        } 
        else{
            arr2.push_back(i + 1);
        }
    }

    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            fs[arr[i]][arr[j]] = true;
        }
    }

    for(int i = 0; i < arr2.size(); i++){
        for(int j = i + 1; j < arr2.size(); j++) {
            gs[arr2[i]][arr2[j]] = true;
        }
    }

    for(int i : arr){
        fs[i][i] = 1;
    }

    for(int i : arr2){
        gs[i][i] = 1;
    }

    arr.clear();
    arr2.clear();

    for(int i = 0; i < t.size(); i++){
        if(t[i] == '0'){
            arr.push_back(i + 1);
        } 
        else{
            arr2.push_back(i + 1);
        }
    }

    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            ft[arr[i]][arr[j]] = true;
        }
    }

    for(int i = 0; i < arr2.size(); i++){
        for(int j = i + 1; j < arr2.size(); j++){
            gt[arr2[i]][arr2[j]] = true;
        }
    }

    for(int i : arr){
        ft[i][i] = 1;
    }

    for(int i : arr2){ 
        gt[i][i] = 1;
    }

    res[0] = true;

    for(int i = 1; i <= s.size(); i++){
        for(int j = 1; j <= i; j++){
            res[i] |= res[j - 1] && ((fs[j][i] && ft[j][i]) || (gs[j][i] && gt[j][i]));
        }
    }

    if(res[s.size()]){
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }


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
