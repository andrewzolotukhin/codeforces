#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  int r = 0;
  int ans = 0;

  while (n--) {
    int x;
    cin >> x;
    if (x >= k) {
      r += x;
    } else {
      if (x == 0 && r > 0) {
        ans++;
        r--;
      }
    }
  }

  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
