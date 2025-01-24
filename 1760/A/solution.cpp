#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c) {
  int i = min(a, min(b, c));
  int j = max(a, max(b, c));
  if (a != i && a != j)
    return a;
  if (b != i && b != j)
    return b;
  return c;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << solve(a, b, c) << '\n';
  }
}
