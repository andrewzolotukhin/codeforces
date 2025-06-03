#include <bits/stdc++.h>
using namespace std;

vector<int> fib(11, 0);
vector<int> fibPrefix(12, 0);

bool solve(int n, int w, int l, int h) {
  if (w <= 0 || l <= 0 || h <= 0) {
    return false;
  }
  int minDim = min(w, min(l, h));
  if (fibPrefix[n + 1] <= minDim) {
    return true;
  }

  if (fib[n] > minDim) {
    return false;
  }

  return solve(n - 1, w - fib[n], l, h) || solve(n - 1, w, l - fib[n], h) ||
         solve(n - 1, w, l, h - fib[n]);
};

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  fib[1] = 1;
  fib[2] = 2;
  for (int i = 3; i <= 10; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }

  for (int i = 1; i < 12; i++) {
    fibPrefix[i] = fibPrefix[i - 1] + fib[i - 1];
  }

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
      int w, l, h;
      cin >> w >> l >> h;

      cout << solve(n, w, l, h);
    }

    cout << '\n';
  }
}
