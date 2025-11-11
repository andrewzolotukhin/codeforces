#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  auto res = a == b && b == c && c == d ? "YES" : "NO";
  cout << res << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
