#include <bits/stdc++.h>
using namespace std;

void solve() {
  int k, l, m, n, d;

  cin >> k >> l >> m >> n >> d;

  if (k == 1 || l == 1 || m == 1 || n == 1) {
    cout << d << '\n';
    return;
  }

  int answer = 0;

  for (int i = 1; i <= d; i++) {
    if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
      answer++;
    }
  }

  cout << answer << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
