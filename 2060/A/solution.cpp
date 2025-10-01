#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, d, e;
  cin >> a >> b >> d >> e;
  int ans = 0;
  for (int c = -500; c <= 500; c++) {
    int s = 0;
    if (a + b == c)
      s++;
    if (b + c == d)
      s++;
    if (c + d == e)
      s++;
    ans = max(ans, s);
    if (ans == 3)
      break;
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
