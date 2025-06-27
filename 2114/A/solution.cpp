#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int s = (int)sqrt(n);
  if (s * s == n) {
    cout << 0 << ' ' << s << '\n';
  } else {
    cout << -1 << '\n';
  }
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
