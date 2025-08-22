#include <bits/stdc++.h>
using namespace std;

string solve(int n, string s) {
  set<char> seen = {s[0]};
  char prev = s[0];

  for (int i = 1; i < n; i++) {
    if (s[i] != prev) {
      if (seen.count(s[i])) {
        return "NO";
      }

      prev = s[i];
      seen.insert(s[i]);
    }
  }

  return "YES";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    cout << solve(n, s) << '\n';
  }
}
