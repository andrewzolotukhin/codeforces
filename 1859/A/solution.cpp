#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  vector<int> b, c;

  sort(a.rbegin(), a.rend());

  int i = 0;
  while (i < n && a[i] == a[0]) {
    c.push_back(a[i++]);
  }

  while (i < n) {
    b.push_back(a[i++]);
  }

  if (b.empty()) {
    cout << -1 << '\n';
    return;
  }

  cout << b.size() << ' ' << c.size() << '\n';
  for (auto &x : b)
    cout << x << ' ';
  cout << '\n';
  for (auto &x : c)
    cout << x << ' ';
  cout << '\n';
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
