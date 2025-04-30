#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  string s;
  cin >> s;
  int n = s.size();
  vector<int> prefix(n + 1, 0);

  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + (s[i] == s[i - 1] ? 1 : 0);
  }

  int m;
  cin >> m;

  while (m--) {
    int l, r;
    cin >> l >> r;
    cout << (prefix[r - 1] - prefix[l - 1]) << '\n';
  }
}
