#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b) {
  if (a == b)
    return 0;
  int diff = abs(a > b ? (a - b) : (b - a));
  if (diff <= 10)
    return 1;

  int res = diff / 10;

  if (res * 10 != diff)
    res++;

  return res;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t, a, b;

  cin >> t;

  while (t--) {
    cin >> a >> b;
    cout << solve(a, b) << '\n';
  }
}
