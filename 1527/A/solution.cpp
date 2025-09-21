#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;

  long long ans = 0;
  for (int i = 0; i < 33; i++) {
    if (((1LL << i) & n)) {
      ans = ((1LL << i) - 1);
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
