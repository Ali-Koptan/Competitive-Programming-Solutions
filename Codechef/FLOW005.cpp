#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a[] = {100, 50, 10, 5, 2, 1};
    cin >> t;
    while(t--){
        int n, idx = 0, c = 0; cin >> n;
        while(n){
            while(n - a[idx] >= 0){
                c++;
                n -= a[idx];
            }
            idx++;
        }
        cout << c << '\n';
    }
    return 0;
}
