#include <bits/stdc++.h>
using namespace std;

long long solve() {
  long long a, b;
  cin >> a >> b;

  if (a == 0) {
    return 1;
  }

  return a + 2 * b + 1;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    cout << solve() << '\n';
}
