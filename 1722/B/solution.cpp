#include <bits/stdc++.h>
using namespace std;

bool solve(string &s1, string &s2) {
  int n = s1.size();
  for (int i = 0; i < n; i++) {
    if (s1[i] != s2[i] &&
        (!((s1[i] == 'B' && s2[i] == 'G') || (s1[i] == 'G' && s2[i] == 'B')))) {
      return false;
    }
  }
  return true;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    string s1, s2;
    int n;
    cin >> n >> s1 >> s2;
    cout << (solve(s1, s2) ? "YES" : "NO") << '\n';
  }
}
