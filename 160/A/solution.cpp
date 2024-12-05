#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, s = 0;
  vector<int> a;

  cin >> n;

  while (n--) {
    int x;
    cin >> x;
    s += x;
    a.push_back(x);
  }

  std::sort(a.begin(), a.end());

  int r = 0;
  for (int i = a.size() - 1; i >= 0; i--) {
    r += a[i];
    if (r > s / 2) {
      cout << a.size() - i << '\n';
      return;
    }
  }

  cout << a.size() << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
