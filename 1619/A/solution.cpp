#include <bits/stdc++.h>
using namespace std;

void solve(string &s) {
  if (s.size() & 1) {
    cout << "NO\n";
    return;
  }

  for (int i = 0; i < s.size() / 2; i++) {
    if (s[i] != s[s.size() / 2 + i]) {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    solve(s);
  }
}
