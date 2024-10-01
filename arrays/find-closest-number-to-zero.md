## Descripción

Given an integer array `nums` of size `n`, return _the number with the value **closest** to_ `0` _in_ `nums`. If there are multiple answers, return _the number with the **largest** value_.

### Ejemplos
1. 
```
**Input:** nums = [-4,-2,1,4,8]
**Output:** 1
**Explanation:**
The distance from -4 to 0 is |-4| = 4.
The distance from -2 to 0 is |-2| = 2.
The distance from 1 to 0 is |1| = 1.
The distance from 4 to 0 is |4| = 4.
The distance from 8 to 0 is |8| = 8.
Thus, the closest number to 0 in the array is 1.
```

2. 
```
**Input:** nums = [2,-1,1]
**Output:** 1
**Explanation:** 1 and -1 are both the closest numbers to 0, so 1 being larger is returned.
```

### Restricciones
- `1 <= n <= 1000`
- `-10^5 <= nums[i] <= 10^5`

# Solución
```c++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int tmp = nums[0];
    int tmppos;

    for (int i = 1; i < n; i++)
    {
        if (abs(nums[i]) < abs(tmp)){
            tmp = nums[i];
        } else if (abs(nums[i]) == abs(tmp)) {
            int maximo = max(nums[i], tmp);
            tmp = maximo;
        }
    }
    cout << tmp << endl;
    return 0;

}
```

## Explicación

Este código lee un entero `n` que representa la cantidad de números a ingresar, luego almacena esos números en un vector llamado `nums`. A continuación, recorre el vector para encontrar el número con el valor absoluto más pequeño. Si hay dos números con el mismo valor absoluto, elige el mayor de ellos. Finalmente, imprime ese número con el valor absoluto mínimo o, en caso de empate, el mayor de esos números.