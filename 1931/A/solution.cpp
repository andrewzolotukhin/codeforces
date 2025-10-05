#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < 26; j++) {
      for (int k = 0; k < 26; k++) {
        int v = i + j + k + 3;
        if (v == n) {
          cout << (char)('a' + i) << (char)('a' + j) << (char)('a' + k) << '\n';
          return;
        }
      }
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
