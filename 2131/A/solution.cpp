#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (auto &x : a)
    cin >> x;
  for (auto &x : b)
    cin >> x;

  int ans = 0;
  while (true) {
    bool first = false;
    for (int i = 0; i < n; i++) {
      if (a[i] > b[i]) {
        a[i]--;
        first = true;
        break;
      }
    }

    for (int i = 0; i < n; i++) {
      if (a[i] < b[i]) {
        a[i]++;
        break;
      }
    }
    ans++;
    if (first == false)
      break;
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
