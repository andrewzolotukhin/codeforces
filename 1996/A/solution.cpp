#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
  int ans = 0;
  ans += n / 4;
  ans += (n % 4) / 2;
  return ans;
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
