#include <bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b, long long c) {
  long long ans = 0;
  for (long long i = 0; i <= 5; i++) {
    for (long long j = 0; j <= 5; j++) {
      for (long long k = 0; k <= 5; k++) {
        if (i + j + k > 5)
          continue;
        ans = max(ans, (a + i) * (b + j) * (c + k));
      }
    }
  }
  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {

    long long a, b, c;
    cin >> a >> b >> c;
    cout << solve(a, b, c) << '\n';
  }
}
