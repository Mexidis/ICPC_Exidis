#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long piezasDomino[51];
    piezasDomino[0] = 1;
    piezasDomino[1] = 1;

    cin >> n;
    for (int i = 2; i < 51; i++)
    {
        piezasDomino[i] = piezasDomino[i - 1] + piezasDomino[i - 2];
    }

    cout << piezasDomino[n] << endl;
    return 0;
}
