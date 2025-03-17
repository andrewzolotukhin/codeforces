#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m) {
  int steps = 0;
  while (n < m) {
    if (m & 1) {
      m++;
    } else {
      m /= 2;
    }
    steps++;
  }

  return steps + n - m;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;
  cin >> n >> m;
  cout << solve(n, m) << '\n';
}
