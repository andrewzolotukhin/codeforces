#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;

  cin >> n;

  if (n == 1) {
    cout << -1 << '\n';
    return;
  }

  long long s = n / 2;

  cout << ((n & 1) ? (s - n) : s) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
