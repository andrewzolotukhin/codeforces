#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n, s;
  cin >> n >> s;

  int ans = 0;

  while (n--) {
    int dx, dy, x, y;
    cin >> dx >> dy >> x >> y;

    if (x == y && ((dx == -1 && dy == -1) || (dx == 1 && dy == 1))) {
      ans++;
      continue;
    }

    if (x + y == s && ((dx == -1 && dy == 1) || (dx == 1 && dy == -1))) {
      ans++;
      continue;
    }
  }

  return ans;
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
