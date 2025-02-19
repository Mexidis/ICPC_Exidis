//
// Created by pac61 on 18/02/2025.
//

#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a[4];
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &a[i]);
    }
    int maxFibo = 0;
    for (int i = -500; i < 250; ++i) {
        maxFibo = max(maxFibo, (a[0] + a[1] == i) + (a[2] - a[1] == i) + (a[3] - a[2] == i));
    }
    return maxFibo;
}

int main(){
    int t; scanf("%d", &t);
    while (t--) {
        cout << solve() << endl;
    }

    return 0;
}