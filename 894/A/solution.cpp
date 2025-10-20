#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;

  int ans = 0;

  int n = s.size();
  vector<int> prefix(n + 1, 0);

  for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + ((s[i] == 'A') ? 1 : 0);
  }

  for (int l = 0; l < n - 2; l++) {
    for (int r = l + 2; r < n; r++) {
      if (s[l] != 'Q' || s[r] != 'Q')
        continue;

      ans += prefix[r] - prefix[l];
    }
  }

  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
