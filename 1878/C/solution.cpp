#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k, x;

  cin >> n >> k >> x;

  long long minS = (1 + k) * k / 2;
  long long maxS = ((n - k + 1) + n) * k / 2;

  if (x >= minS && x <= maxS) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
