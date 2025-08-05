#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;

  string t = s;
  sort(t.begin(), t.end());
  if (t != s) {
    cout << "YES\n";
    cout << t << '\n';
    return;
  }
  swap(t[0], t[t.size() - 1]);
  if (t != s) {
    cout << "YES\n";
    cout << t << '\n';
    return;
  }

  cout << "NO\n";
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
