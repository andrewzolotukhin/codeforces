#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, s, m;
  cin >> n >> s >> m;

  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    a[i] = {l, r};
  }

  sort(a.begin(), a.end());
  if (a[0].first >= s || m - a.back().second >= s) {
    cout << "YES\n";
    return;
  }

  for (int i = 0; i < n - 1; i++) {
    if (a[i + 1].first - a[i].second >= s) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
