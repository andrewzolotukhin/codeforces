#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, long long> dp;

long long solve(long long n) {
  if (dp.count(n))
    return dp[n];
  if (n < 4)
    return 1;
  dp[n] = 2 * solve(n / 4);
  return dp[n];
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    cout << solve(n) << '\n';
  }
}
