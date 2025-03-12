#include <bits/stdc++.h>
using namespace std;

int solve(int x) {
  int answer = -1;
  for (int i = 0; i <= 30; i++) {
    for (int j = 0; j <= 30; j++) {
      if (i == j)
        continue;
      int y = 0;
      y = (1 << i) | (1 << j);
      if ((y < x) && (x + y > (x ^ y)) && ((x ^ y) + y > x)) {
        answer = y;
      }
    }
  }

  return answer;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    int x;
    cin >> x;
    cout << solve(x) << '\n';
  }
}
