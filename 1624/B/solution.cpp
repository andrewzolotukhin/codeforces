#include <bits/stdc++.h>
using namespace std;

bool solve(long a, long b, long c) {
  if (b - a == c - b)
    return true;
  // a b
  int d = b - a;
  if ((a + 2 * d >= c) && (a + 2 * d) % c == 0)
    return true;

  // b c
  d = c - b;
  if ((a <= c - 2 * d) && (c - 2 * d) % a == 0)
    return true;

  // a c
  d = c - a;
  if (d & 1)
    return false;
  d /= 2;

  if (a + d >= b && ((a + d) % b == 0))
    return true;
  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    long a, b, c;
    cin >> a >> b >> c;
    cout << (solve(a, b, c) ? "YES" : "NO") << '\n';
  }
}
