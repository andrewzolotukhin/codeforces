#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  int o = 0;
  string s;
  cin >> s;

  for (int i = 0; i < n; i++) {
    if (s[i] == '1')
      o++;
  }

  if (o <= k || 2 * k > n) {
    cout << "Alice\n";
  } else {
    cout << "Bob\n";
  }
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
