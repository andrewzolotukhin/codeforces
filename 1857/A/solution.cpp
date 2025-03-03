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
    int np = 0;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x % 2) {
        np++;
      }
    }

    cout << ((np % 2 == 0) ? "YES" : "NO") << '\n';
  }
}
