#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;
  long long l = 1;
  for (; l <= n; l++) {
    if ((n % l) != 0)
      break;
  }
  cout << l - 1 << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
