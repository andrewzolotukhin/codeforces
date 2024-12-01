#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s1, s2;

  cin >> s1 >> s2;

  if (s1.size() != s2.size()) {
    cout << "NO" << endl;
    return;
  }

  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] != s2[s1.size() - 1 - i]) {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
