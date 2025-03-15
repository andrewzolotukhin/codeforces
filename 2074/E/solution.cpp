#include <bits/stdc++.h>
using namespace std;

void solve(int n) {

  mt19937 mt(1021);

  int a = 1, b = 1, c = 1;

  while (a == b || a == c || b == c) {
    a = mt() % n + 1;
    b = mt() % n + 1;
    c = mt() % n + 1;
  }

  if (c != 0) {
    while (true) {
      cout << "? " << a << ' ' << b << ' ' << c << "\n";
      cout.flush();
      int x;
      cin >> x;
      if (x == 0) {
        break;
      }

      int v = mt() % 3;

      if (v == 0) {
        a = x;
      } else if (v == 1) {
        b = x;
      } else {
        c = x;
      }
    }
  }

  cout << "! " << a << ' ' << b << ' ' << c << "\n";
  cout.flush();
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    solve(n);
  }
}
