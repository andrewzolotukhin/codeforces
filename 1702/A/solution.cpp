#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;
  long long v = 1LL;

  while (v <= n)
    v *= 10LL;

  v /= 10;
  cout << n - v << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
