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

    vector<int> a(n);
    int m = INT_MAX;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      m = min(m, a[i]);
    }

    long long res = 0LL;

    for (int i = 0; i < n; i++) {
      res += a[i] - m;
    }

    cout << res << '\n';
  }
}
