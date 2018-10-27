#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, bool>open;
    int t, q;
    cin >> t >> q; int o(0);
    for (int i = 0; i < q; i++){
        string a;
        cin >> a;
        if (a == "CLICK"){
            int x; cin >> x;
            if (open[x]){
                open[x] = 0;
                o--;
            }else{
                open[x] = 1;
                o++;
            }
        }else if (a == "CLOSEALL"){
            open.clear();
            o = 0;
        }
        cout << o << '\n';
    }
    return 0;
}
