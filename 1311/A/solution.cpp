#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b) {
  if (a == b) {
    return 0;
  }

  if (a < b) {
    if (a % 2 == 0) {
      if (b % 2 == 0) {
        return 2;
      } else {
        return 1;
      }
    } else {
      if (b % 2 == 0) {
        return 1;
      } else {
        return 2;
      }
    }
  }

  if (a % 2 == 0) {
    if (b % 2 == 0) {
      return 1;
    } else {
      return 2;
    }
  } else {
    if (b % 2 == 0) {
      return 2;
    } else {
      return 1;
    }
  }

  assert(false);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    cout << solve(a, b) << '\n';
  }
}
