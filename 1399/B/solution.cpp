#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<long long> a(n);
    vector<long long> b(n);
    for (auto &v : a)
      cin >> v;
    for (auto &v : b)
      cin >> v;

    auto ma = 1LL << 40;
    auto mb = 1LL << 40;

    for (int i = 0; i < n; i++) {
      ma = min(ma, a[i]);
      mb = min(mb, b[i]);
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) {
      if (ma < a[i] && mb < b[i]) {
        auto c = max(a[i] - ma, b[i] - mb);
        ans += c;
        a[i] -= c;
        b[i] -= c;
      }

      if (a[i] > ma) {
        ans += a[i] - ma;
      }
      if (b[i] > mb) {
        ans += b[i] - mb;
      }
    }

    cout << ans << '\n';
  }
}
