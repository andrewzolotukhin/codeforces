#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;

  string pattern = "hello";

  int l = 0, r = 0;

  while (l < s.size() && r < pattern.size()) {
    if (s[l] == pattern[r]) {
      r++;
    }
    l++;
  }

  cout << ((r <= pattern.size() - 1) ? "NO" : "YES") << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
