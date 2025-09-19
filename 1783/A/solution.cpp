#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  sort(a.rbegin(), a.rend());
  if (a[0] == a.back()) {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";

  int l = 0, r = n - 1;

  bool ll = true;
  while (l <= r) {
    if (ll) {
      cout << a[l++] << ' ';
    } else {
      cout << a[r--] << ' ';
    }
    ll = !ll;
  }

  cout << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
