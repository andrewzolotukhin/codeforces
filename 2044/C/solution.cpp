#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long m, a, b, c;
  cin >> m >> a >> b >> c;

  long long remaining = 0LL;
  long long max1 = min(m, a);
  remaining += m - max1;
  long long max2 = min(m, b);
  remaining += m - max2;

  cout << (max1 + max2 + min(c, remaining)) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
