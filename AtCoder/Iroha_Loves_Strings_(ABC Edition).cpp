#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, l;
    cin >> n >> l; vector<string> v;
    while(n--){
        string s; cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i];
    return 0;
}
