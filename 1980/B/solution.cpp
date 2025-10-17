#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, f, k;
  cin >> n >> f >> k;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  int x = a[f - 1];

  sort(a.rbegin(), a.rend());

  if (a[k - 1] > x) {
    cout << "NO\n";
    return;
  }

  if (a[k - 1] < x) {
    cout << "YES\n";
    return;
  }

  if (k - 1 == n - 1 || a[k] < x) {
    cout << "YES\n";
    return;
  }
  cout << "MAYBE\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
