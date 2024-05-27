#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL_DEBUG
#include "debug.h"
#else
#define debug(...)
#endif

#define endl "\n"
typedef long long ll;


signed main(){
    vector<int> a(3);
    for (int &i : a) cin >> i;

    bool f1 = false,f2 = false,f3 = false;
    for (int i = 0; i < 3; i++){
        if (a[i] == 1) f1 = true;
        else if (a[i] == 2) f2 = true;
        else if (a[i] == 3) f3 = true;
    }
    if (f1 && f2) cout << 3 << endl;
    else if (f1 && f3) cout << 2 << endl;
    else if (f2 && f3) cout << 1 << endl;
    
    return 0;
}



