#include <bits/stdc++.h>
using namespace std;

void solve() {
  int maxVal = 0;
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> a[i][j];
      maxVal = max(maxVal, a[i][j]);
    }
  }

  vector<int> rc(n, 0), cc(m, 0);
  set<pair<int, int>> maxPositions;
  int total = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == maxVal) {
        rc[i]++;
        cc[j]++;
        maxPositions.insert({i, j});
        total++;
      }
    }
  }

  bool isGood = false;

  for (int i = 0; i < n && !isGood; i++) {
    for (int j = 0; j < m; j++) {
      int c = rc[i] + cc[j];
      if (a[i][j] == maxVal)
        c--;
      if (c == total) {
        isGood = true;
        break;
      }
    }
  }

  cout << (isGood ? (maxVal - 1) : maxVal) << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {

    solve();
  }
}
