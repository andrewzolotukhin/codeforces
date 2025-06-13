#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
  /*

   1234
   1234
   1234
   1234

   #1
   1432
   1234
   1234
   1234

   #2
   1432
   2134
   1234
   1234

   #3
   1432
   2143
   1234
   1234

   #4
   1432
   2143
   3214
   1234

   #5
   1432
   2143
   3214
   4321

   132
   213
   321
  */

  cout << (2 * n - 3) << '\n';
  for (int i = 1; i <= n; i++) {
    if (i > 1)
      cout << i << ' ' << 1 << ' ' << i << '\n';
    if (i < n - 1) {
      cout << i << ' ' << (i + 1) << ' ' << n << '\n';
    }
  }
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
