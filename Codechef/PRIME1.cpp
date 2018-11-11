#include <bits/stdc++.h>
using namespace std;
bool prime(int x){
    if (x <= 1)
        return 0;
    if (x == 2)
        return 1;
    for (int i = 2; i <= sqrt(x) + 1; i++)
        if (x % i == 0)
            return 0;
    return 1;
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d%d", &n, &m);
        for (int i = n; i <= m; i++){
            if (prime(i))
		printf("%d\n", i);
        }
        printf("\n");
    }
    return 0;
}
