#include <bits/stdc++.h>
using namespace std;
int main(){
	float x, y;
	cin >> x >> y;
	if (!((int)x % 5) && y - x - 0.50 >= 0){
		cout << fixed << setprecision(2) << y - x - 0.50 << '\n';
	}
	else
		cout << y << '\n';
}
