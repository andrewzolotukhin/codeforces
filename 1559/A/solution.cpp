#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int res;
  cin >> res;
  while (--n) {
    int x;
    cin >> x;
    res &= x;
  }
  cout << res << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
