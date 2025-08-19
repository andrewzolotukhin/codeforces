#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, c;
  cin >> n >> c;

  vector<long long> a(n);
  for (auto &x : a) {
    cin >> x;
  }

  sort(a.rbegin(), a.rend());

  int ans = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] * (1LL << ans) <= c) {
      ans++;
    }
  }

  cout << n - ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
