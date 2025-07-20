#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, q;

  cin >> n >> q;

  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  vector<long long> prefix(n + 1, 0);

  for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + a[i];
  }

  while (q--) {
    int l, r, k;
    cin >> l >> r >> k;

    long long left = prefix[l - 1] % 2;
    long long right = (prefix[n] - prefix[r]) % 2;
    long long newSum = ((long long)k * (r - l + 1)) % 2;

    if ((left + right + newSum) % 2 == 1) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
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
