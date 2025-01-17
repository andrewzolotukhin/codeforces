#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  string s;

  cin >> s;

  int i = 0;

  while (i < s.size()) {
    if (s[i] == '.') {
      cout << '0';
      i++;
      continue;
    }

    if ((i < s.size() - 1) && s[i] == '-' && s[i + 1] == '.') {
      cout << '1';
      i += 2;
      continue;
    }
    if ((i < s.size() - 1) && s[i] == '-' && s[i + 1] == '-') {
      cout << '2';
      i += 2;
      continue;
    }
    i++;
  }
  cout << '\n';
}
