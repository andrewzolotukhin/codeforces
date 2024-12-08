#include <bits/stdc++.h>
using namespace std;

void solve() {
  string p;
  cin >> p;

  for (int i = 0; i < p.size(); i++) {
    if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
      cout << "YES" << '\n';
      return;
    }
  }

  cout << "NO" << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
