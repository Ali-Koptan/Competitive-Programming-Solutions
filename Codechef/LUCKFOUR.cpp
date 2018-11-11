#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, c = 0;
        cin >> n;
        while(n){
            c += (n % 10 == 4);
            n /= 10;
        }
        cout << c << '\n';
    }
    return 0;
}
