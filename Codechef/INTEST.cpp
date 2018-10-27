#include <bits/stdc++.h> 
using namespace std;
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int t, ans = 0;
	for (int i = 0; i < n; i++) {	
		scanf("%d", &t);
		if (t % k == 0) {
			ans++;
		}		
	}
	cout << ans << "\n";	
	return 0;
}