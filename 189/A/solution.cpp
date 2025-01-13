#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, a, b, c;

  cin >> n >> a >> b >> c;

  int result = 0;

  for (int i = 0; i * a <= n; i++) {
    for (int j = 0; i * a + j * b <= n; j++) {
      int v = n - i * a - j * b;
      if (v < 0)
        continue;
      if (v == 0) {
        if (result < i + j) {
          result = i + j;
        }
        continue;
      }
      if (v % c == 0) {
        if (result < (i + j + v / c)) {
          result = i + j + (v / c);
        }
      }
    }
  }

  cout << result << '\n';
}
