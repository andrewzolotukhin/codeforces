#include <bits/stdc++.h>
using namespace std;

string solve() {
  int n;
  string c;
  cin >> n >> c;

  // ABAB
  if (c[n - 1] == c[n - 2] || c[n - 1] == c[0])
    return c[n - 1] == 'A' ? "Alice" : "Bob";

  if (c[n - 2] == c[0] && c[0] == 'B')
    return c[n - 2] == 'A' ? "Alice" : "Bob";

  if (n == 2)
    return c[0] == 'A' ? "Alice" : "Bob";

  int na = 0, nb = 0;
  for (char ch : c) {
    if (ch == 'A') {
      na++;
    } else {
      nb++;
    }
  }

  if (na == 1 && nb == 1) {
    return c[0] == 'A' ? "Alice" : "Bob";
  }

  if (c[0] == 'A' && na == 1) {
    return "Bob";
  }

  if (c[0] == 'A' && nb == 1) {
    return "Alice";
  }

  if (c[0] == 'B' && nb == 1) {
    return "Alice";
  }

  if (c[0] == 'B' && na == 1) {
    return "Bob";
  }

  return c[n - 1] == 'A' ? "Alice" : "Bob";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    cout << solve() << '\n';
  }
}
