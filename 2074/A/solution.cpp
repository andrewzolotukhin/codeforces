#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int r, l, d, u;
    cin >> l >> r >> d >> u;

    cout << ((l == u && u == d && d == r && r == l) ? "Yes" : "No") << '\n';
  }
}
