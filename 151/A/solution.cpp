#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, k, l, c, d, p, nl, np;

  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  cout << min(min((k * l) / (nl * n), c * d / n), p / (np * n)) << '\n';
}
