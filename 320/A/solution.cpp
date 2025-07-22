#include <bits/stdc++.h>
using namespace std;

bool solve(int n) {
  if (n == 0)
    return true;
  if (n % 10 == 1) {
    if (solve(n / 10))
      return true;
  }

  if (n > 10 && n % 100 == 14) {
    if (solve(n / 100))
      return true;
  }

  if (n > 100 && n % 1000 == 144) {
    if (solve(n / 1000))
      return true;
  }

  return false;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  cout << (solve(n) ? "YES" : "NO") << '\n';
}
