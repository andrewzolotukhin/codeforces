#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int a, b, c, d;

  cin >> a >> b;

  c = min(a, b);
  d = (max(a, b) - c) / 2;

  cout << c << " " << d << '\n';
}
