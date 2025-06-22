#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, s, x;
  cin >> n >> s >> x;
  vector<long long> a(n, 0);
  vector<long long> prefix(n + 1, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    prefix[i + 1] = prefix[i] + a[i];
  }

  long long ans = 0;

  int l = 1;
  map<long long, int> cnt;

  // prefix[r] - prefix[l-1] = s
  for (int r = 1; r <= n; r++) {
    if (a[r - 1] > x) {
      cnt.clear();
      l = r + 1;
    } else if (a[r - 1] == x) {
      while (l <= r) {
        cnt[prefix[l - 1]]++;
        l++;
      }
    }
    ans += cnt[prefix[r] - s];
  }

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
