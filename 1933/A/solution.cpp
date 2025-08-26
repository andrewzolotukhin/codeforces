#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int ans = 0;
  while (n--) {
    int x;
    cin >> x;
    if (x >= 0) {
      ans += x;
    } else {
      ans += -x;
    }
  }
  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
