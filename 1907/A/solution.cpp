#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  for (char i = 'a'; i <= 'h'; i++) {
    if (i == s[0])
      continue;
    cout << i << s[1] << '\n';
  }
  for (char i = '1'; i <= '8'; i++) {
    if (i == s[1])
      continue;
    cout << s[0] << i << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
