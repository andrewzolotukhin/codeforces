#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<string> grid(n);

  for (int i = 0; i < n; i++) {
    cin >> grid[i];
  }

  int maxX = 0, maxXc = -1, maxY = 0, maxYc = -1;

  for (int i = 0; i < n; i++) {
    int x = 0;
    for (int j = 0; j < m; j++) {
      if (grid[i][j] == '#')
        x++;
    }
    if (x > maxX) {
      maxX = x;
      maxXc = i;
    }
    if (x < maxX)
      break;
  }

  for (int i = 0; i < m; i++) {
    int y = 0;
    for (int j = 0; j < n; j++) {
      if (grid[j][i] == '#')
        y++;
    }
    if (y > maxY) {
      maxY = y;
      maxYc = i;
    }
    if (y < maxY)
      break;
  }

  cout << maxXc + 1 << " " << maxYc + 1 << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
