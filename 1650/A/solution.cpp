#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  char c;
  cin >> s >> c;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] != c)
      continue;
    int l = i, r = s.size() - i - 1;
    if (l % 2 == 0 && r % 2 == 0) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
