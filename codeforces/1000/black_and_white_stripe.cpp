//
// Created by pac61, serch, kevin on 14/02/2025.
//

#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    scanf("%d", &n);
    vector<int> a(n, 0);
    int k;
    scanf("%d", &k);
    string s;
    cin >> s;
    int i, j;
    for (i = 0; i < n; i++) {
        if (s[i] == 'B') {
            a[i] = 1;
        }
    }

    // Compute sum of first window of size k
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += a[i];

    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += a[i] - a[i - k];
        max_sum = max(max_sum, window_sum);
    }


    if (k == max_sum) return 0;
    return k - max_sum;
}


int main() {
  int t; scanf("%d",&t);
  while(t--){
    int s = solve();
    printf("%d\n", s);
  }

  return 0;
}
