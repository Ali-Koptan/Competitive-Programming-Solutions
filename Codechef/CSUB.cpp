#include <bits/stdc++.h>
using namespace std;
const int r = 1e5 + 1;
int c[r];
int main(){
    int t; cin >> t;
    while(t--){
        int n, x = 0; string s;
        cin >> n >> s;
        for (int i = n - 1; i > -1; i--){
            c[i] = x;
            x += (s[i] == '1');
        }
        long long y = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                y += c[i];
        cout << x + y << '\n';
        memset(c, 0, sizeof c);
    }
    return 0;
}
