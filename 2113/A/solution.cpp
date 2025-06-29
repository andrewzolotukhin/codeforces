#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t, a, b, x, y;
  cin >> t >> a >> b >> x >> y;
  auto solve = [&](int t, int a, int b, int x, int y) {
    int cur = 0;
    cur += max((t - a + x) / x, 0);
    t -= max((t - a + x) / x, 0) * x;
    cur += max((t - b + y) / y, 0);
    return cur;
  };
  cout << max(solve(t, a, b, x, y), solve(t, b, a, y, x)) << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
