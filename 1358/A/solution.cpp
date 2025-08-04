#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, long long m) {
  if (n > m)
    return solve(m, n);

  auto c = n * m;

  if (c & 1) {
    return (n - 1) / 2 * m + (m + 1) / 2;
  } else {
    return n * m / 2;
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    long long n, m;
    cin >> n >> m;
    cout << solve(n, m) << '\n';
  }
}
