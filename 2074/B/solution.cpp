#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      sum += x;
    }

    if (n == 1) {
      cout << sum << '\n';
      continue;
    }

    cout << sum - n + 1 << '\n';
  }
}
