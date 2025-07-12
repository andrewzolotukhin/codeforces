#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  cout << n;

  for (int i = 1; i < n; i++) {
    cout << ' ' << i;
  }
  cout << '\n';
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
