#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;

  if (n & 1) {
    if (k <= n / 2 + 1) {
      cout << 2 * k - 1 << '\n';
    } else {
      cout << 2 * (k - n / 2 - 1) << '\n';
    }
  } else {
    if (k <= n / 2) {
      cout << 2 * k - 1 << '\n';
    } else {
      cout << 2 * (k - n / 2) << '\n';
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
