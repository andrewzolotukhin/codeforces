#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  long long t;

  cin >> t;

  while (t--) {
    long long x;
    cin >> x;
    if (x % 4 != 0) {
      cout << "NO\n";
      continue;
    }

    cout << "YES\n";

    long long s1 = 0;
    for (long long i = 2; i <= x; i += 2) {
      s1 += i;
      cout << i << " ";
    }

    long long i = 1, s2 = 0;
    for (long long j = 1; j < x / 2; j++) {
      s2 += (i + 2 * (j - 1));
      cout << (i + 2 * (j - 1)) << " ";
    }

    cout << (s1 - s2);

    cout << '\n';
  }
}
