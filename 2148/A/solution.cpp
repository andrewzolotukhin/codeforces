#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b;
  cin >> a >> b;
  if (b % 2 == 0) {
    cout << 0 << '\n';
    return;
  }

  cout << a << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
