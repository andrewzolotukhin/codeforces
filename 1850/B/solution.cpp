#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t, n;

  cin >> t;
  while (t--) {

    cin >> n;

    int ans = 0;
    int mv = 0;

    for (int i = 1; i <= n; i++) {
      int a, b;
      cin >> a >> b;
      if (a > 10)
        continue;
      if (b > mv) {
        mv = b;
        ans = i;
      }
    }

    cout << ans << '\n';
  }
}
