#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m, int current, int parent, int catsSeen,
          vector<bool> &cats, vector<vector<int>> &connected) {
  int ans = 0;
  if (catsSeen > m) {
    return ans;
  }

  bool isLeaf = true;
  for (int i = 0; i < connected[current].size(); i++) {
    if (connected[current][i] == parent)
      continue;
    isLeaf = false;
    ans += solve(n, m, connected[current][i], current,
                 (cats[connected[current][i]]) ? (catsSeen + 1) : 0, cats,
                 connected);
  }

  if (isLeaf) {
    return 1;
  }

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;
  cin >> n >> m;

  vector<bool> cats(n, 0);
  for (int i = 0; i < n; i++) {
    int cat;
    cin >> cat;
    cats[i] = cat;
  }

  vector<vector<int>> connected(n, vector<int>());

  for (int i = 0; i < n - 1; i++) {
    int f, t;
    cin >> f >> t;
    connected[f - 1].push_back(t - 1);
    connected[t - 1].push_back(f - 1);
  }

  cout << solve(n, m, 0, -1, cats[0], cats, connected);
}
