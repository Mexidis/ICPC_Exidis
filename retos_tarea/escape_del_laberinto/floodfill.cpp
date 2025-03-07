#include <bits/stdc++.h>
using namespace std;

#define MAXN 100
#define MAXM 100
char line[MAXN+1], grid[MAXM][MAXN+1];

int m,n;

int dr[] = {1,1,0,-1,-1,-1, 0, 1}; // S,SE,E,NE,N,NW,W,SW
int dc[] = {0,1,1, 1, 0,-1,-1,-1}; // neighbors

int floodfill(int r, int c, char c1, char c2) {
  if (r<0 || r>=m || c<0 || c>=n) return 0; // outside
  if (grid[r][c] != c1) return 0; // we want only c1
  grid[r][c] = c2; // important step to avoid cycling!
  int ans = 1; // coloring c1 -> c2, add 1 to answer
  REP (d, 0, 7) // recurse to neighbors
    ans += floodfill(r + dr[d], c + dc[d], c1, c2);
  return ans;
}

// inside the int main() of the solution for UVa 469 - Wetlands of Florida
int main() {
  // read the implicit graph as global 2D array 'grid'/R/C and (row, col) query coordinate
  sscanf(gets(line), "%d", &TC);
  gets(line); // remove dummy line

  while (TC--) {
    R = 0;
    while (1) {
      gets(grid[R]);
      if (grid[R][0] != 'L' && grid[R][0] != 'W') // start of query
        break;
      R++;
    }
    C = (int)strlen(grid[0]);

    strcpy(line, grid[R]);
    while (1) {
      sscanf(line, "%d %d", &row, &col); row--; col--; // index starts from 0!
      printf("%d\n", floodfill(row, col, 'W', '.')); // change water 'W' to '.'; count size of this lake
      floodfill(row, col, '.', 'W'); // restore for next query
      gets(line);
      if (strcmp(line, "") == 0 || feof(stdin)) // next test case or last test case
        break;
    }

    if (TC)
      printf("\n");
  }

  return 0;
}