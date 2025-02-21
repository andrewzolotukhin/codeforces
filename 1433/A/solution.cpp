#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;

  cin >> t;
  while (t--) {
    int x;
    cin >> x;

    int r = 0;
    int M = 10000;

    for (int i = 1; i <= 9; i++) {
      int k = i;
      int s = 1;
      int found = false;
      while (k < M) {
        r += s++;
        if (k == x) {
          found = true;
          break;
        }
        k *= 10;
        k += i;
      }
      if (found) {
        break;
      }
    }

    cout << r << '\n';
  }
}
