#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int c = 0;
  for (auto &x : a) {
    cin >> x;
    if (x == 2)
      c++;
  }

  if (c & 1) {
    cout << -1 << '\n';
    return;
  }

  c /= 2;

  int i = 0;
  for (i = 0; i < n; i++) {
    if (a[i] == 2)
      c--;
    if (c == 0)
      break;
  }

  cout << (i + 1) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
