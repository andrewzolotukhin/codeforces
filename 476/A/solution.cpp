#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m) {

  int l = (n + 1) / 2;
  int k = (l + m - 1) / m;

  if (k * m > n)
    return -1;

  return k * m;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;
  cin >> n >> m;
  cout << solve(n, m) << '\n';
}
