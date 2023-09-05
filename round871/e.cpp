#include <bits/stdc++.h>

using namespace std;

const int maxint = 1000+5;
int n, m;
bool vis[maxint][maxint];
int a[maxint][maxint];

bool isvalid(int i, int j){
    if (i < 0 || i >= n || j < 0 || j >= m){
        return false;
    }
    if (a[i][j] == 0 || vis[i][j]){
        return false;
    }
    return true;
}


int dfs(int i, int j, int ans){
    vis[i][j] = true;
    ans = a[i][j];
    if(isvalid(i-1, j)){
        ans += dfs(i-1, j, ans);
    }
    if(isvalid(i+1, j)){
        ans += dfs(i+1, j, ans);
    }
    if(isvalid(i, j-1)){
        ans += dfs(i, j-1, ans);
    }
    if(isvalid(i, j+1)){
        ans += dfs(i, j+1, ans);
    }
    return ans;
}

int main(){
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                vis[i][j] = false;
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && a[i][j] != 0){
                    ans = max(ans, dfs(i, j, ans));
                }
            }
        }
        cout << ans << endl;
    }
}
