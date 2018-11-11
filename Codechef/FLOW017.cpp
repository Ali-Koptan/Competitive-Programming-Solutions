#include <bits/stdc++.h>
using namespace std;
int arr[3];
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << arr[1] << '\n';
    }
    return 0;
}
