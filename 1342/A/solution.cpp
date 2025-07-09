#include <bits/stdc++.h>
using namespace std;

long long solve() {
  long long x, y, a, b;
  cin >> x >> y >> a >> b;
  if (x == y)
    return min(x * a * 2, x * b);

  if (x <= 0 && y >= 0) {
    return a * (y - x);
  }

  if (x >= 0 && y <= 0) {
    return a * (x - y);
  }

  if (x < 0) {
    x = -x;
  }

  long long c1 = min(x, y) * b + (max(x, y) - min(x, y)) * a;
  long long c2 = a * (x + y);

  return min(c1, c2);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    cout << solve() << '\n';
  }
}
