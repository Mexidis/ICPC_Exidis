// Created by pac61 on 22/12/2024.

#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
  unordered_map<char, int> map;
  map['I'] = 1;
  map['V'] = 5;
  map['X'] = 10;
  map['L'] = 50;
  map['C'] = 100;
  map['D'] = 500;
  map['M'] = 1000;

  int n = s.length();
  int sum = 0;
  int visto = 0;
  int temp = 0;
  for (int i = n-1; i >= 0; i--) {
    //MCMXCIV
    char numActual = s[i];
    visto = map.find(numActual)->second;//5,1
    temp = max(visto, sum);//5,5
    if (visto >= temp) {
      sum += visto;//5
      cout << sum << " sumo " << endl;
    } else if (visto < temp) {
      sum -= visto;
      cout << sum << " resto " << endl;
    }
  }

  return sum;
}



int main() {
  string s;
  cin >> s;

  int ans = romanToInt(s);
  cout << ans << endl;
  return 0;
}

