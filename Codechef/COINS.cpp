#include <bits/stdc++.h>
using namespace std;
map<long long, long long>dp;
long long solve(long long x){
    if (!x)
        return 0;
    auto it = dp.find(x);
    if (it != dp.end()){
        return dp[x];
    }
    return dp[x] = max(x, solve(x / 2) + solve(x / 3) + solve(x / 4));
}
int main(){
    int t;
    while(cin >> t)
        cout << solve(t) << '\n';
    return 0;
}