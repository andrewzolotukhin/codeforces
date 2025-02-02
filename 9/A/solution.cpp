#include <bits/stdc++.h>
using namespace std;

void solve() {}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m, d, o = 6;
  cin >> n >> m;

  d = 6 - max(n, m) + 1;

  int c = gcd(d, o);

  cout << (d / c) << '/' << (o / c) << '\n';
}
