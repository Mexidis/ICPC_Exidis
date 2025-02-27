//
// Created by pac61, Kevin, Sergio, Jimena on 19/02/2025.
//

#include <bits/stdc++.h>

#define MP make_pair
#define S second
#define F first

using namespace std;

typedef pair<int, int> pii;


int a[200001];

pii revisarCondiciones(int l, int r, int n, int cont){
    while (a[r] == a[r+1]) { // nos garantiza que los elementos sean iguales
        r++;
    }

    if ((l == 0 || a[l] < a[l-1]) &&
        (r == n - 1 || a[r] < a[r+1])){
        cont++;
    }

    pii resp = MP(r, cont);
    return resp;
}

void solve(){
    int n; cin >> n;
    //cout << n << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int cont, l, r = l = cont = 0;
    for (int i = r; i < n; ) {
        pii res = revisarCondiciones(l, r, n, cont);
        if (res.S > 1) {
            cout << "NO" << endl;
            cont = 0;
            return;
        }
        l = r = res.F + 1;
        i = r;
    }
    cout << "YES" << endl;
}

int main () {
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}