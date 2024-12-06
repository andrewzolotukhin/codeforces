#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t;

  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    if (s.size() <= 1) {
      cout << s << '\n';
      continue;
    }

    long long rot = 0;
    do {
      rot = 0;
      for (int i = 1; i < s.size(); i++) {
        if (s[i] == '0' || s[i] - 1 <= s[i - 1])
          continue;

        s[i]--;
        swap(s[i], s[i - 1]);
        rot++;
      }

    } while (rot > 0);

    cout << s << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
