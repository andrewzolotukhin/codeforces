#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while (t--) {
    string a, b, c;
    cin >> a >> b >> c;
    int n = a.size(), m = b.size();

    int dp[n + 1][m + 1];
    memset(&dp, 0, sizeof dp);

    dp[0][0] = 0;

    for (auto i = 1; i <= n; i++) {
      dp[i][0] = dp[i - 1][0] + ((c[i - 1] == a[i - 1]) ? 0 : 1);
    }

    for (auto i = 1; i <= m; i++) {
      dp[0][i] = dp[0][i - 1] + ((c[i - 1] == b[i - 1]) ? 0 : 1);
    }

    for (auto i = 1; i <= n; i++) {
      for (auto j = 1; j <= m; j++) {
        dp[i][j] = min(dp[i - 1][j] + ((c[i + j - 1] == a[i - 1]) ? 0 : 1),
                       dp[i][j - 1] + ((c[i + j - 1] == b[j - 1]) ? 0 : 1));
      }
    }

    // for (auto i = 0; i <= n; i++) {
    //   for (auto j = 0; j <= n; j++) {
    //     cout << dp[i][j] << " ";
    //   }
    //   cout << '\n';
    // }

    cout << dp[n][m] << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
