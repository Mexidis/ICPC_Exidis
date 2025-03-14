#include <bits/stdc++.h>
using namespace std;
#define MAXN 100000

typedef pair<string, string> ss;
ss pals[MAXN];

int n, q;

//Esta función nos determinará cómo ordenar el arreglo, tomando como referencia
//primeramente el segundo componente del par y verificar cuál es más chico
//lexicograficamente y si son iguales se fija a la palabra original
bool compara(ss a,ss b){
    if (a.second != b.second) {
        return a.second < b.second;
    } else {
        return a.first < b.first;
    }
}

int main()
{
    int i;
    string s, fs;
    cin >> n;
    ss *p;
    for (i = 0; i < n; i++)
    {
        //Leo la palabra en su estado original
        cin >> s;
        //asigno la misma palabra a la que será reordenada
        fs = s;
        //ordenamos la palabra en ordel alfabetico
        sort(fs.begin(), fs.end());
        //asigno la palabra ordenada  y la palabra en su
        // estado original al arreglo de palabras con su f()
        pals[i] = make_pair(s, fs);
    }
    sort(pals, pals+n, compara);

    cin >> q;
    for (i = 0; i < q; i++)
    {
        //Leo la palabra que voy a consultar
        cin >> s;
        fs = s;
        sort(fs.begin(), fs.end());
        ss dato = make_pair(s, fs);
        p = lower_bound(pals, pals + n, dato, compara);
//      p = lower_bound(&pals[0], &pals[n])
        //Sería exactamente lo mismo escribirlo como arriba
        cout << p - pals << endl; //esa resta de punteros te determina cuántos 
        //datos hay entre ellas
    }
    
    return 0;
}
