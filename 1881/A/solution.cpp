#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  string s1, s2;
  cin >> s1 >> s2;

  for (int i = 0; i <= 5; i++) {
    if (s1.find(s2) != string::npos) {
      cout << i << '\n';
      return;
    }
    s1 += s1;
  }
  cout << -1 << '\n';
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
