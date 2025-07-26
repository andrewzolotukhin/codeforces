#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  unordered_set<int> digits;
  while (n > 0) {
    digits.insert(n % 10);
    n /= 10;
  }

  for (int i = 0; i <= 9; i++) {
    if (digits.find(i) != digits.end()) {
      cout << i << '\n';
      return;
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
