#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &a) {
  int maxVal = 0;
  int n = a.size();
  int m = a[0].size();
  vector<pair<int, int>> maxPositions;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] > maxVal) {
        maxVal = a[i][j];
        maxPositions.clear();
      }
      if (a[i][j] == maxVal) {
        maxPositions.push_back({i, j});
      }
    }
  }

  bool isGood = false;

  for (int i = 0; i < n && !isGood; i++) {
    unordered_set<int> cols;
    for (int j = 0; j < maxPositions.size(); j++) {
      if (maxPositions[j].first != i) {
        cols.insert(maxPositions[j].second);
        if (cols.size() > 1) {
          break;
        }
      }
    }
    if (cols.size() <= 1)
      isGood = true;
  }

  cout << (isGood ? (maxVal - 1) : maxVal) << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cin >> a[i][j];
      }
    }

    solve(a);
  }
}
