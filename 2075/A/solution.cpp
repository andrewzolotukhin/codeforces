#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k) {
  int ans = 0;
  while (n > 0) {
    if (n % 2 == 0) {
      int v = k % 2 == 0 ? k : (k - 1);

      return ans + n / v + (n % v == 0 ? 0 : 1);
    } else {
      n -= k;
      ans++;
    }
  }
  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    cout << solve(n, k) << "\n";
  }
}
