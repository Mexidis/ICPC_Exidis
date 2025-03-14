//
// Created by pac61 on 08/03/2025.
//
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>

unordered_map<int, vector<char>> botones;//Para los números y botones.

void solve(){

}

int main(){
    int j=97;//97 = 'a'
    //asignación de números a caracteres.
    for(int i=2; i<=9; ++i){
        botones[i]={ char(j), char(j+1), char(j+2), ' ' };
        j+=3;
    }
    botones[9][3]='z';

    //lectura de datos
    int total_palabras, num;
    cin>>total_palabras>>num;
    vector<string> palabras(total_palabras);
    vector<string> numeros(num);

    for(int i=0; i<total_palabras; ++i)
        cin>>palabras[i];

    for(int i=0; i<num; ++i)
        cin>>numeros[i];

    //Ordenamientos
    sort(palabras.begin(), palabras.end(), [](const string &s1, const string &s2){
        return s1.size() < s2.size();
    });
    sort(numeros.begin(), numeros.end(), [](const string &s1, const string &s2){
        return s1.size() < s2.size();
    });

    //Prueba de los botones
    for(const pair<int, vector<char>> &p : botones){
        printf("%d: ", p.first);
        printf("%c, %c, %c, %c", p.second[0], p.second[1], p.second[2], p.second[3]);

        cout << endl;
    }
    return 0;
}