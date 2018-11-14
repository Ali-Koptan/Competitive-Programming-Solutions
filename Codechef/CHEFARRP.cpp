#include <bits/stdc++.h>
using namespace std;
int a[55];
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int c = 0;
        for (int i = 0; i < n; i++){
            long long S = 0, P = 1;
            for (int j = i; j < n; j++){
                S += a[j];
                P *= a[j];
                c += (S == P);
            }
        }
        cout << c << '\n';
    }
    return 0;
}
