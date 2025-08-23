#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;
  long long k = n / 2;
  if (n % 2) {
    cout << k * (k + 1) + 1 << '\n';
    return;
  }
  cout << k * k + 1 << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
