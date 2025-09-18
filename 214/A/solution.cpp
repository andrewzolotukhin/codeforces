#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  int ans = 0;

  for (int a = 0; a <= 1000; a++) {
    for (int b = 0; b <= 1000; b++) {
      if ((a * a + b == n) && (b * b + a == m)) {
        ans++;
      }
    }
  }

  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
