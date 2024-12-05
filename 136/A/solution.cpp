#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> f = vector<int>(n), b = vector<int>(n);

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    f[i] = k - 1;
    b[k - 1] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    cout << b[i];
    if (i < n - 1) {
      cout << " ";
    }
  }
  cout << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
