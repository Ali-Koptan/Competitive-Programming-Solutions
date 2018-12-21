#include <bits/stdc++.h>
using namespace std;
const int r = 1e6 + 1;
long long n, m, arr[r];
bool good(long long x) {
    long long d = 0, s = 0;
    for (int i = 0; i < n; i++) {
        if (s + arr[i] <= x)
            s += arr[i];
        else {
            s = arr[i];
            d++;
        }
        if (i == n - 1)
            d++;
    }
    return (d <= m);
}
void solve() {
    long long s = *max_element(arr, arr + n), e = (long long)1e18, a = 1e18, mid = s + (e - s) / 2;
    while(s <= e){
        if (good(mid)){
            a = min(a, mid);
            e = mid - 1;
        }
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    cout << a << '\n';
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    solve();
    return 0;
}
