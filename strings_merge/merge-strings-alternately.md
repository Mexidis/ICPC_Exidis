## Descripción

You are given two strings `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with `word1`. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return _the merged string._

## Ejemplos
### Example 1:

**Input:** word1 = "abc", word2 = "pqr"
**Output:** "apbqcr"
**Explanation:** The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r

### Example 2:

**Input:** word1 = "ab", word2 = "pqrs"
**Output:** "apbqrs"
**Explanation:** Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s

### Example 3:

**Input:** word1 = "abcd", word2 = "pq"
**Output:** "apbqcd"
**Explanation:** Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d```

### Restricciones
- `1 <= word1.length, word2.length <= 100`
- `word1` and `word2` consist of lowercase English letters.

# Solución
```c++
#include <bits/stdc++.h>
using namespace std;

class Solution {

public:

    string mergeAlternately(string word1, string word2) {

        string palabraNueva;

        if (word1.length() == word2.length()){ //flujo normal

            for(int i = 0; i < word1.length(); i++){

                palabraNueva.push_back(word1[i]);

                palabraNueva.push_back(word2[i]);

            }

        } else {

            //variable para saber cuántas veces iterar en el for

            int tamanio = min(word1.length(), word2.length());

            for(int i = 0; i < tamanio; i++){

                palabraNueva.push_back(word1[i]);

                palabraNueva.push_back(word2[i]);

            }

            if (word1.length() > word2.length()){

                for (int i = tamanio; i < word1.length(); i++){

                    palabraNueva.push_back(word1[i]);

                }

            } else {

                for (int i = tamanio; i < word2.length(); i++){

                    palabraNueva.push_back(word2[i]);

                }

            }

        }

  

        return palabraNueva;

    }

};
```

## Explicación

El código implementa una función llamada `mergeAlternately` que toma dos cadenas, `word1` y `word2`, y las combina de forma alternada. Si ambas cadenas tienen la misma longitud, agrega un carácter de cada una en orden alterno. Si tienen longitudes diferentes, combina los caracteres hasta el tamaño de la cadena más corta y luego añade los caracteres restantes de la cadena más larga al final. El resultado es una nueva cadena que alterna los caracteres de las dos cadenas originales.