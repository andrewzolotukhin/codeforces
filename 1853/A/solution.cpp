#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a) {
    cin >> x;
  }

  bool sorted = true;
  int minDiff = INT_MAX;

  for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1]) {
      sorted = false;
    }
    minDiff = min(minDiff, abs(a[i] - a[i - 1]));
  }

  if (!sorted) {
    cout << 0 << '\n';
    return;
  }

  cout << ((minDiff) / 2) + 1 << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
