#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  int minV = INT_MAX, minI = -1;
  int maxV = INT_MIN, maxI = -1;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] < minV) {
      minV = a[i];
      minI = i;
    }
    if (a[i] > maxV) {
      maxV = a[i];
      maxI = i;
    }
  }

  int ans = min({max(maxI, minI) + 1, (n - 1) - min(maxI, minI) + 1,
                 (n - 1) - maxI + minI + 2, (n - 1) - minI + maxI + 2});
  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
