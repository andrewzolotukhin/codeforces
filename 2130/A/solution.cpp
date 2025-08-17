#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, tmp, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    ans += tmp + (tmp == 0);
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
