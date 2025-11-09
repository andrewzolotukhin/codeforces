#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<vector<char>> a(n, vector<char>(n));
  for (auto &row : a)
    for (auto &x : row)
      cin >> x;

  for (int i = 0; i < n; i += k) {
    for (int j = 0; j < n; j += k) {
      cout << a[i][j];
    }
    cout << '\n';
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
