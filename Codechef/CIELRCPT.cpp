#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int t, x = 11; cin >> t;
    while(x > -1)
        v.push_back(pow(2, x--));
    while(t--){
        int n, c = 0, idx = 0; cin >> n;
        while(n){
            while(n - v[idx] >= 0){
                c++;
                n -= v[idx];
            }
            idx++;
        }
        cout << c << '\n';
    }
    return 0;
}
