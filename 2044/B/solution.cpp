#include <bits/stdc++.h>
using namespace std;

void solve(string &s) {
  string o = s;
  for (int i = 0; i < s.size(); i++) {
    char c = s[i];
    char r = 0;
    switch (c) {
    case 'p':
      r = 'q';
      break;
    case 'w':
      r = 'w';
      break;
    case 'q':
      r = 'p';
      break;
    }
    o[s.size() - 1 - i] = r;
  }
  cout << o << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;
    solve(s);
  }
}
