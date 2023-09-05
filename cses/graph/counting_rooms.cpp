#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<char>>& arr, int x, int y) {
    arr[x][y] = '#';
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && ny >= 0 && nx < arr.size() && ny < arr[x].size() && arr[nx][ny] == '.') {
            dfs(arr, nx, ny);
        }
    }
}

int main(){
    int n,m;cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int  j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int con = 0;
    for(int i = 0; i < n; i++){
        for(int  j = 0; j < m; j++){
            if(arr[i][j] == '.'){
                dfs(arr, i, j);
                /* cout << "contador esta aumentando agr\n"; */
                con++;
            }
        }
    }
    cout << con << "\n";
}

