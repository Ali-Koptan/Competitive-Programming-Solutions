#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    map<char, int>f, b;
    while(t--){
        string s;
        cin >> s;
        if (s.size() & 1){
            for (int i = 0; i < s.size() / 2; i++)
                f[s[i]]++;
            for (int i = s.size() - 1; i > s.size() / 2; i--)
                b[s[i]]++;
        }else{
            for (int i = 0; i < s.size() / 2; i++)
                f[s[i]]++;
            for (int i = s.size() - 1; i > s.size() / 2 - 1; i--)
                b[s[i]]++;
        }
        if (f.size() != b.size())
            cout << "NO\n";
        else{
            bool g = 1;
            auto ix = f.begin();
            auto iy = b.begin();
            while(ix != f.end()){
                if (ix -> first != iy -> first || iy -> second != ix -> second){
                    g = 0;
                    break;
                }
                ix++;
                iy++;
            }
            if (g)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        f.clear();
        b.clear();
    }
    return 0;
}
