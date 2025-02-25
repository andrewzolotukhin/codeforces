#include <bits/stdc++.h>
using namespace std;

int solve(long long x) {
  if (x == 1)
    return 0;
  auto t = x;

  int cnt2 = 0, cnt3 = 0;

  while (t % 2 == 0) {
    t /= 2;
    cnt2++;
  }

  while (t % 3 == 0) {
    t /= 3;
    cnt3++;
  }

  if (t != 1 || cnt3 == 0) {
    return -1;
  }

  if (cnt3 < cnt2) {
    return -1;
  }

  return (cnt3 - cnt2) + cnt3;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    long long x;

    cin >> x;

    cout << solve(x) << '\n';
  }
}
