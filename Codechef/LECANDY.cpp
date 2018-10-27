#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,  k, s = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            s += x;
        }
        if (s <= k)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
	return 0;
}
