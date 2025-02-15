#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    string p = "codeforces";

    int res = 0;

    for (int i = 0; i < p.size(); i++) {
      if (p[i] != s[i]) {
        res++;
      }
    }

    cout << res << '\n';
  }
}
