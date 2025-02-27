#include <bits/stdc++.h>
using namespace std;

int countBits(int n){
    int cnt = 0;
    while(n>0){
        int last_bit = (n&1);
        cnt+=last_bit;
        n=n>>1;
    }
    return cnt;
}

int main(){
    int x; scanf("%d", &x);
    printf("%d\n", countBits(x));

    return 0;
}