#include <bits/stdc++.h>
using namespace std;

void solve() {
  vector<long long> v(3);
  cin >> v[0] >> v[1] >> v[2];
  sort(v.begin(), v.end());

  if (v[1] != v[2]) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    cout << v[0] << ' ' << v[0] << ' ' << v[2] << '\n';
  }
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
