#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, H, l, w, h;
    cin >> n >> H;
    int mini = 0, cont = 0, best=0;
    int a[3] = {0}; //
    vector<int> medidas(n);


    for (int i = 0; i < n; i++)
    {
        cin >> a[0] >> a[1] >> a[2];
        for (int j = 0; j < 3; j++)
        {
            if (a[j] <= H) {
                mini = min(a[(j+1)%3], a[(j+2)%3]);
                //if (mini <= )
                cout << mini << endl;
                cont += mini;
                continue;
            }    
        }
    }

    if (mini > 0) {
        cout << cont << endl;
    } else {
        cout << "impossible\n";
    }
    


    return 0;
}