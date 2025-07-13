#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int t = n;

  int p;
  cin >> p;
  n--;
  int s = p;

  bool good = false;
  while (n--) {
    int x;
    cin >> x;
    s += x;
    if (x == p && p == 0) {
      good = true;
    }
    p = x;
  }

  if (s == t) {
    good = true;
  }

  cout << (good ? "YES" : "NO") << '\n';
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
