#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (auto &x : a)
    cin >> x;
  sort(a.begin(), a.end());

  long long ans = 0;
  for (int i = 0; i < n / 2; i++) {
    ans = max(ans, a[i * 2 + 1] - a[i * 2]);
  }
  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
