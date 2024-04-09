#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int rating; cin >> rating;
        if(rating < 1400){
            cout << "Division 4\n";
            continue;
        }
        if(rating >= 1400 && rating < 1600){
            cout << "Division 3\n";
            continue;
        }
        if(rating >= 1600 && rating < 1900){
            cout << "Division 2\n";
            continue;
        }
        if(rating >= 1900){
            cout << "Division 1\n";
            continue;
        }
    }
}
