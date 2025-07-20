#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int maxb = 0;
  int e = 0;

  int b = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '#') {
      b = 0;
    } else {
      e++;
      b++;
    }
    maxb = max(maxb, b);
  }

  if (maxb >= 3) {
    ans = 2;
  } else {
    ans = e;
  }

  cout << ans << '\n';
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
