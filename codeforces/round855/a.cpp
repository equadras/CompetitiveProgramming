#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

//debug
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
#ifndef ONLINE_JUDGE
#define debarr(arr, n) cerr << "arr: ["; forn(i, n) cerr << arr[i] << (i == n-1 ? "" : ", "); cerr << "]" << endl;
#else
#define debarr(x...)
#endif

void solve(){
    int n; cin >> n;
    string st; cin >> st;
    stack<char> s;
    s.push('m');
    bool f = false;

    for (int i = 0; i < n; i++){
               st[i]=tolower(st[i]);
       if(st[i]==s.top()){
           continue;
       }
       else {
           if (i==0){
               cout << "NO" << endl;
               return;
           }
           else { 
               if (s.top()=='m' && st[i]=='e'){
                   s.push('e');
                   f = true;
               }
               else {
                   if (s.top()=='e' && st[i]=='o'){
                       s.push('o');
                       f = true;
                   }
                   else {
                       if (s.top()=='o' && st[i]=='w'){
                           s.push('w');
                           f = true;
                       }
                       else {
                           cout << "NO" << endl;
                           return;
                       }
                   }
               }
           }
       }
    }
    string aux = "";
    while(!s.empty()){
        aux += s.top();
        s.pop();
    }
    reverse(aux.begin(), aux.end());
    if (aux == "meow") cout << "YES" << endl;
    else cout << "NO" << endl;

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


