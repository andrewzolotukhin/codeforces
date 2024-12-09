#include <bits/stdc++.h>
#include <cctype>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  vector<bool> seen = vector<bool>(26, false);

  for (int i = 0; i < s.size(); i++) {
    char c = toupper(s[i]);
    seen[c - 'A'] = true;
  }

  for (int i = 0; i < seen.size(); i++) {
    if (!seen[i]) {
      cout << "NO" << '\n';
      return;
    }
  }
  cout << "YES" << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
