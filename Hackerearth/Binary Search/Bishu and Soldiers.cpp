#include <bits/stdc++.h>
using namespace std;
int n; pair<int, int>arr[10001];
void solve(int x){
	int s = 0, e = n - 1, m;
    m = (s + e) / 2;
	while(s <= e){
		if (arr[m].first <= x)
			s = m + 1;
		else
			e = m - 1;
        m = (s + e) / 2;
	}
	cout << m + 1 << ' ' << arr[m].second << '\n';
}
int main(){
    cin >> n;
	int s = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i].first;
    sort(arr, arr + n);
	for (int i = 0; i < n; i++){
		s += arr[i].first;
		arr[i].second = s;
	}
	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		solve(x);
	}
    return 0;
}
