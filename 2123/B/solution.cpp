#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, j, k;
  cin >> n >> j >> k;
  int mv = INT_MIN, mi = 1;
  vector<int> a(n);
  for (int i = 1; i <= n; i++) {
    cin >> a[i - 1];
    if (mv < a[i - 1]) {
      mv = a[i - 1];
      mi = i;
    }
  }

  if (k == 1 && a[j - 1] != mv) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
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
