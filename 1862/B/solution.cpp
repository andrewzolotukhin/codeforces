#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (i > 0 && a.back() > x) {
      a.push_back(1);
    }
    a.push_back(x);
  }

  cout << a.size() << '\n';
  for (auto x : a) {
    cout << x << ' ';
  }

  cout << '\n';
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
