#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;

  cin >> n;

  int l = 1;
  int lc = 1;
  n--;

  while (n > 0) {
    lc += ++l;
    n -= lc;
  }

  cout << ((n < 0) ? (l - 1) : l) << '\n';
}
