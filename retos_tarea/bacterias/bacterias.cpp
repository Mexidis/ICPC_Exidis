#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int mat[m][n];

    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> mat[i][j];
        }
    } 

    for (int i = m - 1; i >= 0; i--) 
    {
        for (int j = n - 1; j >= 0; j--) 
        {
            if (i == m - 1 && j == n - 1) 
            {
                continue; 
            } else if (i == m - 1) 
            {
                mat[i][j] += mat[i][j + 1]; 
            } else if (j == n - 1) 
            {
                mat[i][j] += mat[i + 1][j]; 
            } else 
            {
                mat[i][j] += min(mat[i + 1][j], mat[i][j + 1]); 
            }
        }
    }

    cout << mat[0][0] << endl;

    return 0;
}
