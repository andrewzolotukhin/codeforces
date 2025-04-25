#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int n) {
  int r = n % 2;

  int c = n / 2;

  return min(n * a, c * b + (r ? a : 0));
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;
    cout << solve(a, b, n) << '\n';
  }
}
