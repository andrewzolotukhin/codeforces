#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int t = n / 4, r = 1;
  int x = 1;
  while (t /= 10) {
    x <<= 1;
    x |= 1;
    r++;
  }

  vector<int> candidates;
  // cout << x << endl;
  int k = 0;
  do {
    int b = x;
    while (b-- >= 0) {
      int c = 0;
      for (int i = 0; i < r - k; i++) {
        c += (b & (1 << i)) ? 4 : 7;
        c *= 10;
      }
      c /= 10;
      if (c > 0 && c <= n) {
        candidates.push_back(c);
      }
    }
    k++;
    if (x == 0)
      break;
    x >>= 1;
  } while (true);

  for (auto c : candidates) {
    if (n % c == 0) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
