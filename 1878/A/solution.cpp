#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    bool has = false;
    while (n--) {
      int x;
      cin >> x;
      if (x == k) {
        has = true;
      }
    }

    cout << (has ? "YES" : "NO") << '\n';
  }
}
