#include <bits/stdc++.h>
using namespace std;

void solve() {}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;
    if ((a == 0 && b % 2 == 1) || (a + 2 * b) % 2 != 0) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }

  return 0;
}
