#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
  if (n == 3)
    return 3;
  return 2;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    cout << solve(n) << '\n';
  }
}
