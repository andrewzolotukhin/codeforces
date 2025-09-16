#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, g, l, x[10000];
  cin >> a;
  for (l = 1; l <= a; l++)
    cin >> x[l];
  for (l = 1; l <= a; l++) {
    b = x[l];
    g = 0;
    while (b != -1) {
      b = x[b];
      g++;
    }
    if (g > c)
      c = g;
  }
  cout << c + 1;
}
