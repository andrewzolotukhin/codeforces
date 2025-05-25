#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;

  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);

    for (auto &k : a)
      cin >> k;

    if (n == 1) {
      cout << "0\n";
      continue;
    }

    sort(a.begin(), a.end());
    int cnt = 0;
    int c = 1;
    for (int i = 1; i < n; i++) {
      if (abs(a[i] - a[i - 1]) <= m) {
        c++;
      } else {
        c = 1;
      }
      cnt = max(cnt, c);
    }

    cout << (n - cnt) << '\n';
  }
}
