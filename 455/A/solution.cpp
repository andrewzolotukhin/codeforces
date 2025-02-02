#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;

  vector<long long> sums(100020, 0);
  vector<long long> dp(100020, 0);

  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    sums[x] += x;
  }

  dp[1] = sums[1];

  for (int i = 2; i < 100020; i++) {
    dp[i] = max(dp[i - 1], dp[i - 2] + sums[i]);
  }

  cout << dp[100019] << '\n';

  return 0;
}
