#include <bits/stdc++.h>
using namespace std;

long long solve(long long x, long long y, long long n) {
  long long rem = n % x;
  if (rem == y) {
    return n;
  }

  if (rem < y) {
    return n - x - rem + y;
  }

  if (rem > y) {
    return n - rem + y;
  }

  assert(false);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    long long x, y, n;
    cin >> x >> y >> n;

    cout << solve(x, y, n) << '\n';
  }
}
