#include <bits/stdc++.h>
using namespace std;
long long fp(long long b, long long p){
    if (!p)
        return 1;
    if (p & 1)
        return b * fp(b, p - 1);
    return fp(b * b, p >> 1);
}
vector<long long>v;
inline void go(){
    for (long long i = 0; i <= 32; i++)
        for (long long j = 0; j <= 32; j++)
            if (i != j)
                v.push_back(fp(2, i) + fp(2, j));
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    go();
    sort(v.begin(), v.end());
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << abs(n - v[lower_bound(v.begin(), v.end(), n) - v.begin()]) << '\n';
    }
    return 0;
}
