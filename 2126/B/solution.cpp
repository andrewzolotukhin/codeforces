#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  int c = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 0) {
      c++;
      if (c == k) {
        ans++;
        c = 0;
        i++;
      }
    } else {
      c = 0;
    }
  }
  cout << ans << '\n';
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
