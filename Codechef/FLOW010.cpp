#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        char x; cin >> x;
        x = tolower(x);
        if (x == 'b')
            cout << "BattleShip\n";
        else if (x == 'c')
            cout << "Cruiser\n";
        else if (x == 'd')
            cout << "Destroyer\n";
        else if (x == 'f')
            cout << "Frigate\n";
    }
    return 0;
}
