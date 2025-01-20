#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int m, n, a, b;
  cin >> n >> m >> a >> b;

  int rem = n % m;
  int c1 = (n / m) * b + min(rem * a, b);
  int c2 = a * n;

  cout << min(c1, c2) << '\n';
  return 0;
}
