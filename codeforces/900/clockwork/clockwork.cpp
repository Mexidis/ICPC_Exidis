//
// Created by pac61, serch on 15/02/2025.
//

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; scanf("%d", &n);//numero de relojes
    int a[n];//timesets de los relojes
    int ai, rd, ld;
    bool resolb = true;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &ai);
        if( resolb ){
            rd = (n - (i+1))*2;
            ld = i * 2;
            if(rd >= ai || ld >= ai)
                resolb = false;
        }
    }
    cout << (resolb ? "YES\n" : "NO\n");
}

int main(){
    int t; scanf("%d", &t);
    while(t--)solve();
    return 0;
}