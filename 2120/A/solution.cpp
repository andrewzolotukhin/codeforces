#include <bits/stdc++.h>
using namespace std;

bool solve() {
  int w1, h1, w2, h2, w3, h3;
  cin >> w1 >> h1 >> w2 >> h2 >> w3 >> h3;

  if (w3 + w2 + w1 == h1 && h3 == h2 && h2 == h1) {
    return true;
  }

  if (h3 + h2 + h1 == w1 && w2 == w3 && w3 == w1) {
    return true;
  }

  if (w2 + w3 == w1 && h2 == h3 && h3 + h1 == w1) {
    return true;
  }

  if (h2 + h3 == h1 && w2 == w3 && w3 + w1 == h1) {
    return true;
  }

  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    cout << (solve() ? "YES" : "NO") << '\n';
  }
}
