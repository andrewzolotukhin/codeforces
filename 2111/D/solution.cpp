#include <bits/stdc++.h>
using namespace std;

void solve() {}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (auto &v : a)
      cin >> v;

    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
      int l = (i & 1) ? (m - 1 - i / 2) : (i / 2);
      int r = m - 1 - l;
      cout << a[l] << ' ' << a[r] << ' ' << a[l] << ' ' << a[r] << ' ' << a[l]
           << ' ' << a[r] << '\n';
    }
  }
}
