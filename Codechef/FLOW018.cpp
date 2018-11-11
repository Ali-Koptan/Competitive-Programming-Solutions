#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a = 1;
        int n; cin >> n;
        for (int i = 1; i <= n; i++)
            a *= i;
        cout << a << '\n';
    }
    return 0;
}
