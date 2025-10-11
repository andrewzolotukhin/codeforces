#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x;
  cin >> x;

  int maxS = -1, ans = -1;

  for (int y = 1; y < x; y++) {
    int s = gcd(x, y) + y;
    if (s >= maxS) {
      maxS = s;
      ans = y;
    }
  }

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
