#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    string l, r;
    cin >> l >> r;
    auto f = [&](string X, string Y) {
      int ret = 0;
      for (int i = 0; i < X.length(); i++)
        ret += (X[i] == Y[i]);
      return ret;
    };

    int ans = l.length() + f(l, r);

    for (int i = 1; i <= l.length(); i++) {
      int x = stoi(l.substr(0, i));
      int y = stoi(r.substr(0, i));
      if (y > x + 1)
        ans = min(ans, i - 1 + f(l.substr(0, i - 1), r.substr(0, i - 1)));
    }

    cout << ans << "\n";
  }
}
