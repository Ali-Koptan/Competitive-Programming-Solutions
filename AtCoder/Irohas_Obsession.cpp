#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k; short arr[k];
    for (int i = 0; i < k; i++)
        cin >> arr[i];
    while(true){
        bool f = 1;
        int y = n;
        while(y > 0){
            for (int i = 0; i < k; i++){
                if (y % 10 == arr[i]){
                    f = 0;
                    break;
                }
            }
            y /= 10;
        }
        if (f){
            cout << n << '\n';
            return 0;
        }
        ++n;
    }
    return 0;
}
