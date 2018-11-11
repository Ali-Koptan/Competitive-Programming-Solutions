#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m = 0; cin >> n;
        while(n){
            m *= 10;
            m += (n % 10);
            n /= 10;
        }
        cout << m << '\n';
    }
    return 0;
}
