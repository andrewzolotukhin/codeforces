#include <bits/stdc++.h>
using namespace std;

void solve() {
  int res = 0, n;
  bool lastTrue;

  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    bool isTrue = s == "01";

    if (i == 0) {
      res++;
      lastTrue = isTrue;
      continue;
    }

    if (isTrue != lastTrue) {
      lastTrue = isTrue;
      res++;
    }
  }

  cout << res << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
