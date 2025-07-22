#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;

  sort(s.begin(), s.end(), greater<char>());
  cout << s << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);
  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
