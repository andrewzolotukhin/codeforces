#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  int n = s.size();

  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      cout << 1 << '\n';
      return;
    }
  }

  cout << n << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
