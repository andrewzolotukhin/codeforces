#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;

  const int MAX = 7;

  int zc = 0, oc = 0;
  if (s.size() < MAX) {
    cout << "NO" << endl;
    return;
  }
  for (size_t i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      zc++;
      oc = 0;
    }
    if (s[i] == '1') {
      zc = 0;
      oc++;
    }
    if (oc == MAX || zc == MAX) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
