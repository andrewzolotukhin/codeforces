#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int l, r;
    cin >> l >> r;

    int rem = r % l;

    r -= rem;

    if (r <= l) {
      cout << -1 << ' ' << -1 << '\n';
    } else {
      cout << l << ' ' << r << '\n';
    }
  }
}
