#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long t, a, b;
  cin >> t;

  while (t--) {

    cin >> a >> b;
    long long r = 0;

    cout << (((a % b) == 0) ? 0 : (b - a % b)) << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
