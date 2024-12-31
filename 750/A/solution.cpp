#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, k;
  cin >> n >> k;

  int r = 4 * 60 - k;
  int s = 0;
  int i;
  for (i = 0; i < n; i++) {
    s += (i + 1) * 5;

    if (s > r) {
      cout << i << endl;
      return 0;
    }
  }
  cout << n << endl;
  return 0;
}
