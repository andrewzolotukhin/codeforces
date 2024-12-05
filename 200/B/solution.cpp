#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  double x;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    x += (double)k;
  }

  cout << fixed << setprecision(12) << x / n << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
