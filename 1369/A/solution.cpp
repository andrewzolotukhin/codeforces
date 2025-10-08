#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  if (n % 4) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
