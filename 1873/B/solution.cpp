#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    long long m = 11;
    long long p = 1;
    int z = 0;
    while (n--) {
      long long x;
      cin >> x;
      if (x < m) {
        m = x;
      }
      if (x != 0) {
        p *= x;
      } else {
        z++;
      }
    }

    if (z > 1) {
      cout << 0 << '\n';
      continue;
    } else {
      if (m != 0) {
        p = p / m;
      }

      p = p * (m + 1);

      cout << p << '\n';
    }
  }
}
