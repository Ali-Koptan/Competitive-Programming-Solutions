#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        cout << __gcd(a, b) << ' ' << a * b / __gcd(a, b) << '\n';
    }
	return 0;
}
