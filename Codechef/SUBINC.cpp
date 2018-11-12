#include <bits/stdc++.h>
using namespace std;
const int r = 1e5 + 10;
int arr[r];
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for (int i = 0 ; i < n; i++)
            cin >> arr[i];
        long long c = 0, d = 0;
        for (int i = 0; i < n - 1; i++){
            c++;
            if (arr[i] > arr[i + 1]){
                if (c == 2)
                    d++;
                else
                    d += (c * (c + 1) / 2) - c;
                c = 0;
            }
            if (i == n - 2){
                if (!(arr[i] > arr[i + 1]))
                    c++;
                if (c == 2)
                    d++;
                else
                    d += (c * (c + 1) / 2) - c;
            }
        }
        cout << d + n << '\n';
    }
    return 0;
}
