#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  if (a[0] == 1) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
