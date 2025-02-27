#include <bits/stdc++.h>

using namespace std;
    

int contarSubcadena(string s){
    set<char> chars;
    int cont1 = 0, maxSubstring = 0;
    for (int i=0; i < s.length(); i++){ 
        if (chars.count(s[i]) == 0) //si no está lo metemos
        {
            chars.insert(s[i]);
            maxSubstring = max(maxSubstring, i - cont1 + 1);
        } else { //si está borramos todo mientras se repita
            while (chars.count(s[i]))
            {
                chars.erase(s[cont1]);
                cont1++;
            }
            chars.insert(s[i]);
        }
    }
    return maxSubstring;
}

int main()
{
    string s; cin>> s;
    int salida = contarSubcadena(s);
    cout << salida << endl;

    return 0;
}
