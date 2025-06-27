#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  // a[0] = x + y * n
  // a[1] = x*2 + y * (n-1);
  // a[1]-a[0] = x - y
  // a[0] = y - a[0] + a[1] + y*n
  // a[0] = y*(n+1) - a[0] + a[1]
  // x = y - a[0] + a[1]
  // y = (2*a[0]-a[1])/(n+1)
  //
  int y = (2 * a[0] - a[1]) / (n + 1);
  int x = y - a[0] + a[1];

  if (y < 0 || x < 0) {
    cout << "NO\n";
    return;
  }

  for (int i = 0; i < n; i++) {
    a[i] -= x * (i + 1);
    a[i] -= y * (n - i);
    if (a[i] != 0) {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
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
