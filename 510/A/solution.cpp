#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;

  cin >> n >> m;

  for (int i = 1; i <= n; i++) {
    auto l = string(m, ((i & 1) ? '#' : '.'));
    if (!(i & 1)) {
      l[(i % 4) ? (m - 1) : (0)] = '#';
    }
    cout << l << '\n';
  }
}
