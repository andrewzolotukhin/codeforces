#include <bits/stdc++.h>
using namespace std;

bool solve() {
  int a, b;
  cin >> a >> b;
  if (b > a)
    return false;

  return (b - a) % 2 == 0;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    cout << (solve() ? "Yes" : "No") << '\n';
}
