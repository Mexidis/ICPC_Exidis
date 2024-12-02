#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
#define MAXM 100

char grid[MAXM][MAXN+1];

int m,n;


int dr[] = {1,0,-1, 0}; // vecinos al S,E,N,W
int dc[] = {0,1, 0,-1}; // 
void floodfill(int r, int c, char c1, char c2) {
  int i;
  int respuesta;
  if (r<0 || r>=m || c<0 || c>=n) return; // fuera del grid
  if (grid[r][c] != c1) return; // buscamos el color c1
  grid[r][c] = c2; // cambiamos el color a c2
  for (i=0; i<4; i++) {
    floodfill(r + dr[i], c + dc[i], c1, c2);
  }
}

int main() {
  int i,j;
  int cont=0;
  scanf("%d %d", &m, &n);
  for (i=0; i<m; i++) {
    scanf("%s",grid[i]);
  }
  
  for (i=0; i<m; i++) {
    for (j=0; j<n; j++) {
      if (grid[i][j]=='L') {
        floodfill(i,j,'L','W');
        cont++;
      }
    }
  }
  printf("%d\n",cont);
  return 0;
}