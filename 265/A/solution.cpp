#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s, p;
  cin >> s >> p;

  int i = 0;

  for (int j = 0; j < p.size(); j++) {
    if (s[i] == p[j])
      i++;
  }

  cout << (i + 1) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
