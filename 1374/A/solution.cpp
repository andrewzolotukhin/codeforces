#include <bits/stdc++.h>
using namespace std;

void solve() {}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int x, y, n;
    cin >> x >> y >> n;

    for (int i = n; i >= 0; i++) {
      if (i % x == y) {
        cout << i << '\n';
        break;
      }
    }
  }
}
