//
// Created by pac61, Kevin on 17/02/2025.
//

#include <bits/stdc++.h>
using namespace std;

string determinarGanadorPar(long long a[], int n){
    long long menorVisto = a[0];
    int posMenor = 0;
    for (int i = 1; i <= n; ++i) {
        if (menorVisto > a[i]){
            menorVisto = a[i];
            posMenor = i;
        }
    }
    posMenor++;

    if (posMenor % 2 == 0) {
        return "Mike";
    } else {
        return "Joe";
    }
}

void solve(){
    int n; scanf("%d", &n);
    long long a[n];

    for(int i=0; i<n; ++i){
        scanf("%lld", &a[i]);
    }

    if (n % 2 != 0){
        cout << "Mike" << endl;
    } else {
        cout << determinarGanadorPar(a, n) << endl;
    }
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        solve();
    }

    return 0;
}