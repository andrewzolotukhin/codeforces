#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  sort(a.begin(), a.end());

  int ans = 0;
  for (int i = 0; i < n / 2; i++) {
    ans += a[n - 1 - i] - a[i];
  }
  cout << ans << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
