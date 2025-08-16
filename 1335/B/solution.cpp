#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, b;
  cin >> n >> a >> b;

  string s = "";
  int i = 0;
  while (s.size() < n) {
    s += (i++ % b) + 'a';
  }
  cout << s << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
