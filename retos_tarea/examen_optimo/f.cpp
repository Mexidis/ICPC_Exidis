#include <bits/stdc++.h>
using namespace std;
typedef vector<pair<int, int>> vii;

int main(){
    int n, m, p, i, j;
    cin >> n;
    vii problemas(n);
    for (i = 0; i < n; i++)
    {
        cin >> m >> p;
        problemas[i] = {m, p};
    }
    int tm = 180;
    vector<int> memo(tm + 1, 0);
    
    for (i = 0; i < n; i++)
    {
        int minutos = problemas[i].first;
        int puntos = problemas[i].second;

        for (j = tm; j >= minutos; j--) {
            memo[j] = max(memo[j], memo[j - minutos] + puntos);
        }
    }

    cout << memo[tm] << endl;
    

    return 0;
}
