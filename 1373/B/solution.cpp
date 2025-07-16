#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int z = 0, o = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0')
      z++;
    if (s[i] == '1')
      o++;
  }
  int m = min(z, o);

  if (m & 1) {
    cout << "DA\n";
    return;
  }

  cout << "NET\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
