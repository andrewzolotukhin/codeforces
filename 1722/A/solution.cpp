#include <bits/stdc++.h>
using namespace std;

bool solve(int n, string s) {
  set<char> e = {'T', 'i', 'm', 'u', 'r'};
  if (n != e.size() || s.size() != e.size()) {
    return false;
  }
  for (char c : s) {
    e.erase(c);
  }

  return e.size() == 0;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    string s;
    int n;
    cin >> n;
    cin >> s;
    cout << (solve(n, s) ? "YES" : "NO") << '\n';
  }
}
