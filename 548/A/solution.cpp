#include <bits/stdc++.h>
using namespace std;

void solve(int n, int t) {
  if (t == 10) {
    if (n < 2) {
      cout << -1 << '\n';
    } else {
      cout << '1';
      for (int i = 0; i < n - 1; i++) {
        cout << '0';
      }
      cout << '\n';
    }
    return;
  }

  cout << t;
  for (int i = 0; i < n - 1; i++) {
    cout << '0';
  }
  cout << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, t;
  cin >> n >> t;
  solve(n, t);
}
