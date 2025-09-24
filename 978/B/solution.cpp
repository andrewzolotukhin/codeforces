#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int c = s[0] == 'x', ans = 0;

  for (int i = 1; i < n; i++) {
    if (s[i] != 'x') {
      if (c > 2)
        ans += c - 2;
      c = 0;
    } else {
      if (s[i - 1] == 'x') {
        c++;
      } else {
        c = 1;
      }
    }
  }
  if (c > 2)
    ans += c - 2;

  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
