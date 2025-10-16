#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a > b)
    swap(a, b);
  if (c > d)
    swap(c, d);

  int e = min(a, c);

  a = (a - e) % 12;
  b = (b - e) % 12;
  c = (c - e) % 12;
  d = (d - e) % 12;

  if (a > c) {
    swap(a, c);
    swap(b, d);
  }

  if (b > c && d > b) {
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
