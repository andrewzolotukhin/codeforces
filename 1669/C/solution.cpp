#include <bits/stdc++.h>
using namespace std;

bool solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  for (int i = 0; i + 2 < n; i++) {
    if (a[i] % 2 != a[i + 2] % 2) {
      return false;
    }
  }
  for (int i = 1; i + 2 < n; i++) {
    if (a[i] % 2 != a[i + 2] % 2) {
      return false;
    }
  }

  return true;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    cout << (solve() ? "YES" : "NO") << '\n';
}
