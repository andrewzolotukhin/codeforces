#include <bits/stdc++.h>
using namespace std;

long long sd(long long x) { return pow(3LL, x + 1) + x * pow(3LL, x - 1); }

void solve() {
  long long n;
  cin >> n;

  vector<long long> r;
  while (n) {
    r.push_back(n % 3);
    n /= 3;
  }

  long long ans = 0LL;

  for (long long i = 0; i < r.size(); i++) {
    ans += r[i] * sd(i);
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
