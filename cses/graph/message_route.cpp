#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;
queue <int> q;
int vis[maxn];
vector <int> pai (maxn);
vector <int> adj[maxn];

void bfs(int nodo){
    vis[nodo] = 1;
    q.push(nodo);
    while(!q.empty()){
        int a = q.front();
        q.pop();
        for(auto i: adj[a]){
            if(vis[i]) continue;
            vis[i] = vis[a] + 1;
            pai[i] = a;
            q.push(i);
        }
    }
}
int main(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int n1, n2; cin >> n1 >> n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);
    }
    bfs(1);
    if(!vis[n]){
        cout << "IMPOSSIBLE\n";
        return 0;
    }
    vector<int> c;int x = n;
    while(x!=1){
        c.push_back(x); 
        x=pai[x];
    }
    c.push_back(1); 
    reverse(c.begin(), c.end());
    cout << c.size() << "\n"; 
    for (auto i: c) cout << (i) << " ";
    cout << "\n";
}    
