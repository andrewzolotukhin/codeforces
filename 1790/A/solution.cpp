#include <bits/stdc++.h>
using namespace std;

void solve() {
  string pi = "314159265358979323846264338327";
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < min((int)s.size(), 30); i++) {
    if (pi[i] == s[i]) {
      ans++;
    } else {
      break;
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
