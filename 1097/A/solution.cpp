#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  vector<string> s2(5);
  cin >> s;
  for (string &v : s2)
    cin >> v;

  bool ok = false;
  for (int i = 0; i < 5; i++) {
    if (s[0] == s2[i][0] || s[1] == s2[i][1]) {
      ok = true;
      break;
    }
  }

  cout << (ok ? "YES" : "NO") << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
