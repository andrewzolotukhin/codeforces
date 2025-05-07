#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int minX = INT_MAX;
    int maxX = INT_MIN;

    for (int i = 0; i < 4; i++) {
      int x, y;
      cin >> x >> y;
      minX = min(minX, x);
      maxX = max(maxX, x);
    }

    cout << (maxX - minX) * (maxX - minX) << '\n';
  }
}
