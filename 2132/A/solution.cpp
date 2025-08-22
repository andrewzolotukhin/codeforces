#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  string a, b, c;
  cin >> n >> a >> m >> b >> c;

  string ans = a;

  for (int i = 0; i < b.size(); i++) {
    if (c[i] == 'D') {
      ans += b[i];
    } else {
      ans = b[i] + ans;
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
