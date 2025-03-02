#include <bits/stdc++.h>
using namespace std;

int solve(int h, int m) { return (23 - h) * 60 + (60 - m); }

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int h, m;
    cin >> h >> m;
    cout << solve(h, m) << '\n';
  }
}
