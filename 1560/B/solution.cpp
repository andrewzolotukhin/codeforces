#include <bits/stdc++.h>
using namespace std;

long long solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int n = 2 * abs(a - b);

  if (a > n || b > n || c > n) {
    return -1;
  }

  long long d;

  d = n / 2 + c;

  while (d > n)
    d -= n;

  return d;
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
