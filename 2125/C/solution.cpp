#include <bits/stdc++.h>
using namespace std;

bool good(long long n) {
  return (n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0) && (n % 7 != 0);
}

long long getn(long long n) {
  long long ans = 0;
  for (long long i = 1; i < n; i++) {
    if (good(i))
      ans++;
  }

  return ans;
}

long long get(long long n) { return (n / 210) * getn(210) + getn(n % 210); }

void solve() {
  long long l, r;
  cin >> l >> r;

  long long ans = get(r + 1) - get(l);
  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
