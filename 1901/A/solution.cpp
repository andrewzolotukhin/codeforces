#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, x;
    cin >> n >> x;

    int prev;
    cin >> prev;
    int ans = prev;
    for (int i = 1; i < n; i++) {
      int y;
      cin >> y;
      ans = max(ans, (y - prev));
      prev = y;
    }

    ans = max(ans, (x - prev) * 2);

    cout << ans << '\n';
  }
}
