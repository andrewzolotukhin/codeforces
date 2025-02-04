#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  if (n >= 0) {
    cout << n << '\n';
    return 0;
  }

  int r = max(n / 10, n / 100 * 10 + n % 10);

  cout << r << '\n';
}
