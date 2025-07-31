#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;

  if (k * k > n) {
    cout << "NO\n";
    return;
  }

  if (n % 2 != k % 2) {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
