#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t; vector<int>v;
    while(t--){
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        int idx = -1;
        for (int i = 1; i < v.size(); i++){
            if (v[i] < v[i - 1]){
                idx = i;
                break;
            }
        }
        for (int i = 0; i < idx; i++)
            v.push_back(v[i]);
        v.erase(v.begin(), v.begin() + idx);
        bool f = 1;
        for (int i = 1; i < v.size(); i++){
            if (v[i] < v[i - 1]){
                f = 0;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
        v.clear();
    }
    return 0;
}