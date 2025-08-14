#include <bits/stdc++.h>
#include <climits>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> s(n);
  for (auto &x : s) {
    cin >> x;
  }
  vector<pair<int, int>> sc(n);
  for (int i = 0; i < n; i++) {
    sc.push_back({s[i], i});
  }
  sort(sc.rbegin(), sc.rend());

  for (int i = 0; i < n; i++) {
    int j = 0;
    while (i == sc[j].second)
      j++;
    cout << (s[i] - sc[j].first) << " ";
  }
  cout << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
