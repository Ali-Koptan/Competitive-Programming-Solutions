#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int x; cin >> x; int c(0);
        while(x > 0){
            c += x % 10;
            x /= 10;
        }
        cout << c << '\n';
    }
    return 0;
}