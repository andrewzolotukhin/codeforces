#include <bits/stdc++.h>
using namespace std;

long solve(long a, long b, long n) {
  if (a > n || b > n)
    return 0;
  return 1 + ((a < b) ? solve(a + b, b, n) : solve(a, b + a, n));
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int a, b, n;
    cin >> a >> b >> n;
    cout << solve(a, b, n) << '\n';
  }
}
