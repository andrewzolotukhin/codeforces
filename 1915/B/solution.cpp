#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    string s;
    bool solved = false;
    for (int i = 0; i < 3; i++) {
      cin >> s;
      if (solved)
        continue;
      unordered_map<char, int> mp;
      for (int i = 0; i < 3; i++) {
        mp[s[i]]++;
      }

      if (mp['A'] && mp['B'] && mp['C'])
        continue;

      if (mp['A'] && mp['B'])
        cout << "C\n";
      if (mp['B'] && mp['C'])
        cout << "A\n";
      if (mp['A'] && mp['C'])
        cout << "B\n";
    }
  }
}
