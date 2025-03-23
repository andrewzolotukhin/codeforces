#include <bits/stdc++.h>
using namespace std;

bool solve(int n, string &s, int k) {
  bool eq = true;
  for (auto c : s) {
    eq &= (c == s[0]);
  }
  if (eq)
    return false;
  if (k > 0)
    return true;

  string r = string(s.rbegin(), s.rend());
  return s < r;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    string s;
    int n, k;

    cin >> n >> k >> s;
    cout << (solve(n, s, k) ? "YES" : "NO") << '\n';
  }
}
