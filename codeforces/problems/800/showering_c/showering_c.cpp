//
// Created by pac61, Jimena, Madrid, serch on 26/02/2025.
//

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, s, m = n = s = 0; scanf("%d %d %d", &n, &s, &m);
    int li = 0, ri = 0;
    int aux = 0;
    bool resp = false;

    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &li, &ri);
        if (li - aux >= s){
            resp = true;
        }
        aux = ri;
    }
    if (m - ri >= s) {
        resp = true;
    }

    printf("%s\n", resp ? "YES" : "NO");
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}