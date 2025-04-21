#include <bits/stdc++.h>
using namespace std;

bool solve(string &s) {
  int x = 0, y = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'L')
      x--;
    if (s[i] == 'R')
      x++;
    if (s[i] == 'U')
      y++;
    if (s[i] == 'D')
      y--;
    if (x == 1 && y == 1)
      return true;
  }
  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    string s;
    int n;
    cin >> n >> s;
    cout << (solve(s) ? "YES" : "NO") << '\n';
  }
}
