#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m) {
  int ans = 0;

  int days = 0;
  while (n > 0) {
    ans++;
    n--;
    days++;
    if (days % m == 0) {
      n++;
    }
  }

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;
  cin >> n >> m;

  cout << solve(n, m) << '\n';
}
