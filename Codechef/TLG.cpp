#include <bits/stdc++.h>
using namespace std;
int main(){
    int mxa = -1, mxb = -1, acca = 0, accb = 0;
    int n; cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        acca += a; accb += b;
        if (a != b){
            if (acca > accb)
                mxa = max(mxa, acca - accb);
            else
                mxb = max(mxb, accb - acca);
        }
    }
    if (mxa > mxb)
        cout << 1 << ' ' << mxa << '\n';
    else
        cout << 2 << ' ' << mxb << '\n';
    return 0;
}
