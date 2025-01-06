#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k) {
  // x * n = a * 10 + k
  // x = ((a * 10) + k) / n
  for (int i = 1; i <= 10; i++) {
    if ((n * i) % 10 == 0) {
      return i;
    }
    if ((i * n) % 10 == k) {
      return i;
    }
  }
  return 0;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, k;

  cin >> n >> k;

  cout << solve(n, k) << '\n';
}
