#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, x, y;
  cin >> a >> x >> y;

  int mid = min(x, y) + abs(x - y) / 2;

  if ((a >= min(x, y) && a <= max(x, y))) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
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
