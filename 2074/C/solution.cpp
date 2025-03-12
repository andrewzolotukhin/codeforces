#include <bits/stdc++.h>
using namespace std;

int solve(int x) {
  // calculate binary inversion of x
  int inv = ~x;

  // in rightess significant bit
  int rsb = 0;
  int k = 1;
  while (k < inv) {
    if (k & inv) {
      rsb = k;
    }
    k <<= 1;
  }

  for (int i = 0; (1 << i) <= rsb; i++) {
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    cout << solve(x) << '\n';
  }
}
