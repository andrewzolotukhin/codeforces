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

    int e = 0, o = 0;
    while (n--) {
      int x;
      cin >> x;
      if (x & 1) {
        o++;
      } else {
        e++;
      }
    }

    if (o == 0) {
      cout << "NO\n";
      continue;
    }

    if (o & 1) {
      cout << "YES\n";
    } else {
      if (e == 0) {
        cout << "NO\n";
        continue;
      }
      cout << "YES\n";
    }
  }
}
