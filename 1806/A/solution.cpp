#include <bits/stdc++.h>
using namespace std;

int solve() {
  long x, y, tx, ty;
  cin >> x >> y >> tx >> ty;

  if (y > ty)
    return -1;

  int ans = ty - y;
  ty -= ans;
  tx -= ans;

  if (tx > x)
    return -1;

  ans += abs(x - tx);

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    cout << solve() << '\n';
}
