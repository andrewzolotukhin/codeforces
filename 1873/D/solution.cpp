#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int i = 0;
  int ans = 0;

  while (i < n) {
    if (s[i] == 'W') {
      i++;
      continue;
    }

    ans++;
    i += k;
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
