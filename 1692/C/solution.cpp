#include <bits/stdc++.h>
using namespace std;

void solve() {
  vector<string> b(8);
  for (auto &r : b)
    cin >> r;

  for (int i = 1; i < 7; i++) {
    for (int j = 1; j < 7; j++) {
      if (b[i][j] == '#' && b[i - 1][j - 1] == '#' && b[i - 1][j + 1] == '#' &&
          b[i + 1][j - 1] == '#' && b[i + 1][j + 1] == '#') {
        cout << i + 1 << " " << j + 1 << "\n";
        return;
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
