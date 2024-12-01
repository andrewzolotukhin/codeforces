#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, h, w = 0;

  cin >> n >> h;
  while (n--) {
    int k;
    cin >> k;
    (k <= h) ? w++ : w += 2;
  }

  cout << w << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
