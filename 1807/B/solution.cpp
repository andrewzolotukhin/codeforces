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

    int s1 = 0, s2 = 0;
    while (n--) {
      int x;
      cin >> x;
      if (x & 1) {
        s2 += x;
      } else {
        s1 += x;
      }
    }

    if (s1 > s2) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
