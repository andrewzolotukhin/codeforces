#include <bits/stdc++.h>
using namespace std;

int solve(int n, int x) {
  if (n <= 2)
    return 1;

  return (n - 3) / x + 2;

  // (f-2)*x + 1 <= n - 2 <= (f-1)*x
  // (f-2)*x <= n - 3
  // f <= (n - 3) / x + 2
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);
  int t;

  cin >> t;

  while (t--) {
    int n, x;
    cin >> n >> x;
    cout << solve(n, x) << '\n';
  }
}
