#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n; scanf("%d", &n);
    string s; cin >> s;
    set<char> problemas;
    int cont = 0;
    for (int j = 0; j < n; j++)
    {
        char cadaChar = s[j];
        if (!problemas.count(cadaChar)){
            problemas.insert(cadaChar);
            cont += 2;
        } else {
            cont++;
        }
    }   
    printf("%d\n",cont);
}

int main()
{
    int testcases; scanf("%d", &testcases); 
    while (testcases--)
    {
        solution();
    }

    return 0;
}
