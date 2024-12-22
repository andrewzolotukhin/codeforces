#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  string s;
  cin >> s;

  bool allUpper = true;
  bool firstLower = islower(s[0]);

  for (int i = 1; i < s.size(); i++) {
    if (islower(s[i])) {
      allUpper = false;
    }
  }

  if (allUpper) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (firstLower) {
      s[0] = toupper(s[0]);
    }
  }

  cout << s << '\n';
}
