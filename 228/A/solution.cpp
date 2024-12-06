#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int result = 3;

  if (b != a) {
    result--;
  }

  if (c != b && c != a) {
    result--;
  }

  if (d != c && d != b && d != a) {
    result--;
  }

  cout << result << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
