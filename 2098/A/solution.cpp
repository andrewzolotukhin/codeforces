#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    for (int j = i + 1; j < s.size(); j++) {
      if (s[i] > s[j] && s[j] - '0' >= 10 - i - 1) {
        swap(s[i], s[j]);
      }
    }
  }
  cout << s << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
