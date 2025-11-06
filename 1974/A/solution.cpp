#include <bits/stdc++.h>
using namespace std;

void solve() {
  int y, x;
  cin >> x >> y;
  int ans = 0;
  int rem = 0;

  ans = (y + 1) / 2;

  x -= ans * 5 * 3 - y * 4;
  x = max(x, 0);
  ans += (x + 5 * 3 - 1) / (5 * 3);

  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
