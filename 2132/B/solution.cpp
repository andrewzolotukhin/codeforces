#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;

  // n = 1000000000000000000
  //
  // n = x + x*10^t
  // t > 0
  // n = x * (1 + 10^t)
  // x = n/(1+10^t)
  // x = n/z

  long long z = 11;
  set<long long> ans;
  while (z <= n) {
    if (n % z == 0) {
      long long x = n / z;
      ans.insert(x);
    }
    z = (z - 1) * 10 + 1;
  }
  cout << ans.size() << endl;
  if (ans.size() == 0) {
    return;
  }

  int i = 0;
  for (auto v : ans) {
    cout << v;
    if (i < ans.size() - 1)
      cout << ' ';
  }
  cout << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
