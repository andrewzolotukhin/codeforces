#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  getline(cin, s);

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == ' ')
      continue;

    if (i == 0 || s[i - 1] == ' ')
      cout << s[i];
  }

  cout << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    solve();
  }
}
