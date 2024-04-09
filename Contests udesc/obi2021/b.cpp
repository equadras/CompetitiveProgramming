#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n; cin >> n;
        stack<int> stk;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if (x == 0) stk.pop();
        else stk.push(x);
    }
    int ans = 0;
    while (stk.size() > 0){
        ans += stk.top();
        stk.pop();
    }

    cout << ans << "\n";
}
