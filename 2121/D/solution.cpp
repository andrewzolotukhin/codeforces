#include <bits/stdc++.h>
using namespace std;

void solve() {
  int k;
  cin >> k;
  vector<int> a(k), b(k);

  vector<pair<int, int>> ops;

  for (auto &x : a)
    cin >> x;
  for (auto &x : b)
    cin >> x;

  for (int i = 0; i < k; i++) {
    for (int j = 0; j < k - 1; j++) {
      if (a[j] % 2 == 0 && a[j + 1] % 2 == 1) {
        swap(a[j], a[j + 1]);
        ops.emplace_back(1, j);
      }
    }
  }

  for (int i = 0; i < k; i++) {
    for (int j = 0; j < k - 1; j++) {
      if (b[j] % 2 == 1 && b[j + 1] % 2 == 0) {
        swap(b[j], b[j + 1]);
        ops.emplace_back(2, j);
      }
    }
  }

  int c = 0;
  while (c < k && (a[c] % 2 == 1))
    c++;

  for (int i = c; i < k; i++) {
    swap(a[i], b[i]);
    ops.emplace_back(3, i);
  }

  for (int i = 0; i < k; i++) {
    for (int j = 0; j < k - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        ops.emplace_back(1, j);
      }
    }
  }

  for (int i = 0; i < k; i++) {
    for (int j = 0; j < k - 1; j++) {
      if (b[j] > b[j + 1]) {
        swap(b[j], b[j + 1]);
        ops.emplace_back(2, j);
      }
    }
  }

  // cout << "================\n";
  // for (auto x : a)
  //   cout << x << ' ';
  // cout << '\n';
  // for (auto x : b)
  //   cout << x << ' ';
  // cout << '\n';
  // cout << "================\n";
  cout << ops.size() << '\n';

  for (auto [k, v] : ops) {
    cout << k << ' ' << v + 1 << '\n';
  }

  // cout << "===============\n";
  // for (auto x : a)
  //   cout << x << ' ';
  // cout << '\n';
  // for (auto x : b)
  //   cout << x << ' ';
  // cout << '\n';
  //
  // cout << "===============\n";
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
