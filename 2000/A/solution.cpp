#include <bits/stdc++.h>
using namespace std;

bool solve() {
  string s;
  cin >> s;

  if (s.size() >= 3 && s[0] == '1' && s[1] == '0' && s[2] >= '2') {
    return true;
  };

  if (s.size() > 3 && s[0] == '1' && s[1] == '0' && s[2] != '0')
    return true;

  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    cout << (solve() ? "YES" : "NO") << '\n';
  }
}
