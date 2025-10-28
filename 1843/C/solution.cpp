#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;
  long long ans = n;
  while (n) {
    n /= 2;
    ans += n;
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
