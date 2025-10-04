#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  bool ok = true;
  for (int i = 0; i < n - 1; i++) {
    if (abs(a[i] - a[i + 1]) != 5 && abs(a[i] - a[i + 1]) != 7) {
      ok = false;
      break;
    }
  }

  cout << (ok ? "YES\n" : "NO\n");
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
