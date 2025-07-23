#include <bits/stdc++.h>
using namespace std;

long long solve() {
  long long a, b, k;
  cin >> a >> b >> k;

  long long g = gcd(a, b);
  a = a / g;
  b = b / g;

  if (a <= k && b <= k) {
    return 1;
  }

  return 2;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    cout << solve() << '\n';
  }
}
