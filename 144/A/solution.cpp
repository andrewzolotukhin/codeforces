#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  vector<int> s;
  cin >> n;

  int max = 0, min = 200;
  int maxI = 0, minI = 0;

  for (int i = 0; i < n; i++) {
    int ss;
    cin >> ss;
    s.push_back(ss);
    if (ss > max) {
      maxI = i;
      max = ss;
    }
    if (ss <= min) {
      min = ss;
      minI = i;
    }
  }

  if (max == min) {
    cout << 0 << '\n';
    return;
  }

  cout << maxI + (n - 1 - minI) - ((maxI > minI) ? 1 : 0) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
