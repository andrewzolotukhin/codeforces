#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, m;
  cin >> n >> m;

  if (n == 1) {
    cout << 0 << '\n';
    return;
  }

  if (n == 2) {
    cout << m << '\n';
    return;
  }

  cout << 2 * m << '\n';
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
