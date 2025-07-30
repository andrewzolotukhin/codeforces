#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  int h[n + 1];
  for (int i = 1; i < n + 1; i++)
    cin >> h[i];

  int cur = h[k];
  int dist = h[k];

  sort(h + 1, h + n + 1);

  auto ans = true;

  for (int i = 1; i < n + 1; i++) {
    if (h[i] <= cur)
      continue;
    if (h[i] - cur > dist) {
      ans = false;
    }
    cur = h[i];
  }

  if (ans)
    cout << "YES\n";
  else
    cout << "NO\n";
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
