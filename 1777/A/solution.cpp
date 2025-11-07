#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  int ans = 0;
  int c = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] % 2 == a[i - 1] % 2) {
      c++;
    } else {
      ans += c;
      c = 0;
    }
  }
  ans += c;
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
