#include <bits/stdc++.h>
using namespace std;

int solve(int w, int h) {
  int ans = 1;
  while (w % 2 == 0) {
    w /= 2;
    ans *= 2;
  }
  while (h % 2 == 0) {
    h /= 2;
    ans *= 2;
  }
  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int w, h, n;
    cin >> w >> h >> n;

    // cout << solve(w, h) << '\n';
    cout << ((solve(w, h) >= n) ? "YES" : "NO") << '\n';
  }
}
