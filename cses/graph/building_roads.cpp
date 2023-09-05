#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5+5;
int vis[maxn];
vector<int> ruas;
/* vector <vector<int>> adj; */
vector <int> adj [maxn];

void dfs(int nodo){
    vis[nodo] = true;
    for(auto filho: adj[nodo]){
        if(!vis[filho]) dfs(filho);
    }
}
int main(){

    int n, m;cin >> n >> m;
    for(int i = 0; i < m; i++){
       int nodo1,nodo2;
       cin >> nodo1 >> nodo2;
       adj[nodo1].push_back(nodo2);
       adj[nodo2].push_back(nodo1);
   }     

   for(int i = 1; i <= n; i++){
       if(vis[i] == false){
           /* cout << "entrou no 2° for\n"; */
           ruas.push_back(i);
           dfs(i);
           /* cout << "i 2° for = " << i << endl; */
       }
   }
   cout << ruas.size() - 1 << endl;
   for(int i = 0; i < ruas.size() -1; i++){
       cout << ruas[i] << " " << ruas[i + 1] << endl;
   }

}
