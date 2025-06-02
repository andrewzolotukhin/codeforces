#include <bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b, long long c) {
  long long f = a - 1;
  long long s = abs(b - c) + abs(1 - c);
  if (f == s)
    return 3;
  return (f < s) ? 1 : 2;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << solve(a, b, c) << '\n';
  }
}
