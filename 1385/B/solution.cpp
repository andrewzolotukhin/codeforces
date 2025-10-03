#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  unordered_set<int> f;

  n *= 2;
  while (n--) {
    int x;
    cin >> x;
    if (f.count(x))
      continue;
    cout << x << ' ';
    f.insert(x);
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
