#include <bits/stdc++.h>
using namespace std;

long long sd(long long x) { return pow(3LL, x + 1) + x * pow(3LL, x - 1); }

void solve() {
  long long n, k;
  cin >> n >> k;

  vector<long long> cost;
  long long c = 3;
  long long cnt = 1;
  for (int i = 0; i < 21; ++i) {
    cost.push_back(c);
    c = 3 * c + cnt;
    cnt *= 3;
  }

  vector<long long> r;
  long long nz = 0;
  while (n) {
    r.push_back(n % 3);
    if (n % 3) {
      nz += n % 3;
    }
    n /= 3;
  }

  long long ans = 0LL;

  if (nz > k) {
    ans = -1LL;
  } else {
    k -= nz;
    k /= 2;
    for (long long i = r.size() - 1; i >= 1; --i) {
      if (r[i] <= k) {
        r[i - 1] += 3LL * r[i];
        k -= r[i];
        r[i] = 0LL;
      } else {
        r[i - 1] += 3LL * k;
        r[i] -= k;
        break;
      }
    }
    for (int i = 0; i < r.size(); i++) {
      ans += cost[i] * r[i];
    }
  }

  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
