#include <bits/stdc++.h>
using namespace std;

bool solve() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  int z = 0, o = 0;

  for (char c : s) {
    if (c == '0') {
      z++;
    } else {
      o++;
    }
  }

  int minK = max(z, o) - n / 2;
  int maxK = z / 2 + o / 2;
  return (k >= minK && k <= maxK && k % 2 == minK % 2);
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
